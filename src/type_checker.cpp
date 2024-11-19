#include "antlr4-runtime.h"
#include "generated/PrystParserBaseVisitor.h"
#include "generated/PrystParser.h"
#include "generated/PrystLexer.h"
#include "types.hpp"
#include "llvm_type_converter.hpp"
#include "error.hpp"
#include <llvm/IR/LLVMContext.h>
#include "type_registry.hpp"
#include "runtime/runtime_registry.hpp"
#include "runtime/web_types.hpp"
#include "type_checker.hpp"

using namespace antlr4;

namespace pryst {

// Begin method implementations

void debugPrintType(const std::shared_ptr<Type>& type, const std::string& context) {
    std::cout << "Debug [" << context << "]: ";
    if (type) {
        std::cout << "Type: " << type->toString() << std::endl;
    } else {
        std::cout << "Null type" << std::endl;
    }
}

void TypeChecker::declareVariable(const std::string& name, std::any type) {
    auto typeSPtr = std::any_cast<std::shared_ptr<Type>>(type);
    std::cout << "Debug [declareVariable]: Registering variable " << name
              << " with type " << (typeSPtr ? typeSPtr->toString() : "null") << std::endl;
    if (scopes.empty()) {
        throw Error("InternalError", "No scope available for variable declaration");
    }

    if (typeSPtr && typeSPtr->getKind() == Type::Kind::Class) {
        auto classType = std::static_pointer_cast<ClassType>(typeSPtr);
        std::string typeName = classType->getName();
        typeRegistry_.cacheType(typeName, typeSPtr);

        size_t lastSeparator = typeName.rfind("::");
        if (lastSeparator != std::string::npos) {
            std::string shortName = typeName.substr(lastSeparator + 2);
            typeRegistry_.cacheType(shortName, typeSPtr);
        }
    }

    if (currentScope_) {
        (*currentScope_)[name] = type;
    } else {
        throw Error("InternalError", "No current scope available for variable declaration");
    }
}

void TypeChecker::pushScope() {
    std::cout << "Debug [pushScope]: Creating new scope" << std::endl;

    // Create new scope
    std::unordered_map<std::string, std::shared_ptr<Type>> newScope;

    // If there are existing scopes, preserve all class types and their namespaces
    if (!scopes.empty()) {
        for (const auto& [name, type] : scopes.back()) {
            if (type && type->getKind() == Type::Kind::Class) {
                auto classType = std::static_pointer_cast<ClassType>(type);
                std::string typeName = classType->getName();

                // Preserve all class types, not just web types
                std::cout << "Debug [pushScope]: Preserving type " << typeName << " in new scope" << std::endl;
                newScope[name] = type;

                // Ensure type is cached in registry
                typeRegistry_.cacheType(typeName, type);

                // Cache short name if it's a qualified name
                size_t lastSeparator = typeName.rfind("::");
                if (lastSeparator != std::string::npos) {
                    std::string shortName = typeName.substr(lastSeparator + 2);
                    typeRegistry_.cacheType(shortName, type);
                }
            }
        }
    }

    scopes.push_back(newScope);
}

void TypeChecker::popScope() {
    if (!scopes.empty()) {
        std::cout << "Debug [popScope]: Removing current scope" << std::endl;

        // Before popping the scope, ensure all class types and their namespaces are preserved
        for (const auto& [name, type] : scopes.back()) {
            if (type && type->getKind() == Type::Kind::Class) {
                auto classType = std::static_pointer_cast<ClassType>(type);
                std::string typeName = classType->getName();
                std::cout << "Debug [popScope]: Preserving type " << typeName << " in registry" << std::endl;

                // Cache with full name
                typeRegistry_.cacheType(typeName, type);

                // Parse and register all namespace parts
                std::vector<std::string> parts;
                std::string currentNamespace;
                size_t start = 0;
                size_t end = typeName.find("::");

                // Register core namespaces first
                typeRegistry_.registerNamespace("pryst");
                typeRegistry_.registerNamespace("pryst::web");

                while (end != std::string::npos) {
                    std::string part = typeName.substr(start, end - start);
                    if (!currentNamespace.empty()) {
                        currentNamespace += "::";
                    }
                    currentNamespace += part;
                    std::cout << "Debug [popScope]: Registering namespace: " << currentNamespace << std::endl;
                    typeRegistry_.registerNamespace(currentNamespace);

                    start = end + 2;
                    end = typeName.find("::", start);
                }

                // Cache with short name if it's a qualified name
                size_t lastSeparator = typeName.rfind("::");
                if (lastSeparator != std::string::npos) {
                    std::string shortName = typeName.substr(lastSeparator + 2);
                    typeRegistry_.cacheType(shortName, type);
                }
            }
        }

        scopes.pop_back();
    } else {
        std::cerr << "Warning [popScope]: Attempted to pop empty scope stack" << std::endl;
    }
}



std::any TypeChecker::lookupVariable(const std::string& name) {
    for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
        auto found = it->find(name);
        if (found != it->end()) {
            return found->second;
        }
    }
    throw Error("ReferenceError", "Undefined variable: " + name);
}

std::any TypeChecker::checkMemberAccess(std::any baseType, const std::string& member, bool isNullable) {
    auto baseTypeSPtr = std::any_cast<std::shared_ptr<Type>>(baseType);
    std::cout << "Debug [checkMemberAccess]: Checking member '" << member
              << "' on type " << baseTypeSPtr->toString() << std::endl;

    // Handle nullable types
    if (baseTypeSPtr->getKind() == Type::Kind::Nullable) {
        auto nullableType = std::static_pointer_cast<NullableType>(baseTypeSPtr);
        auto innerType = nullableType->getInnerType();
        auto memberType = checkMemberAccess(std::any(innerType), member, false);
        auto memberTypeSPtr = std::any_cast<std::shared_ptr<Type>>(memberType);
        return std::any(isNullable ? std::make_shared<NullableType>(memberTypeSPtr) : memberTypeSPtr);
    }

    // Handle class types
    if (baseTypeSPtr->getKind() == Type::Kind::Class) {
        auto classType = std::static_pointer_cast<ClassType>(baseTypeSPtr);
        if (auto memberType = classType->getField(member)) {
            return std::any(isNullable ? std::make_shared<NullableType>(memberType) : memberType);
        }
    }

    throw Error("TypeError", "Type " + baseTypeSPtr->toString() + " has no member '" + member + "'");
}

std::any TypeChecker::getTypeFromTypeContext(PrystParser::TypeContext* ctx) {
    std::cout << "Debug [getTypeFromTypeContext]: Processing type context" << std::endl;
    std::cout << "Debug [getTypeFromTypeContext]: Context text: " << ctx->getText() << std::endl;

    try {
        if (!ctx) {
            std::cerr << "Error [getTypeFromTypeContext]: Null type context" << std::endl;
            throw Error("TypeError", "Null type context");
        }

        // Handle qualified types (e.g., pryst::web::Request)
        if (ctx->qualifiedType()) {
            std::cout << "Debug [getTypeFromTypeContext]: Processing qualified type" << std::endl;
            auto qualifiedType = ctx->qualifiedType();

            // Build the full type name and namespace parts
            std::vector<std::string> parts;
            for (auto identifier : qualifiedType->IDENTIFIER()) {
                parts.push_back(identifier->getText());
            }

            // Build full type name first
            std::string fullTypeName;
            for (size_t i = 0; i < parts.size(); ++i) {
                if (i > 0) fullTypeName += "::";
                fullTypeName += parts[i];
            }
            std::cout << "Debug [getTypeFromTypeContext]: Full type name: " << fullTypeName << std::endl;

            // Pre-register web types immediately if this might be a web type
            if (fullTypeName.find("pryst::web") == 0 || parts[0] == "pryst" || parts[0] == "web") {
                std::cout << "Debug [getTypeFromTypeContext]: Pre-registering web types early for: " << fullTypeName << std::endl;

                // Register namespaces first
                typeRegistry_.registerNamespace("pryst");
                typeRegistry_.registerNamespace("pryst::web");

                // Then register web types
                pryst::runtime::web::registerWebTypes(runtimeRegistry_);

                // Try to get the type immediately after registration
                auto type = typeRegistry_.getCachedType(fullTypeName);
                if (type) {
                    std::cout << "Debug [getTypeFromTypeContext]: Found type immediately after web registration: " << fullTypeName << std::endl;
                    return std::any(type);
                }
            }

            // Build and register namespace parts
            std::string namespacePart;
            for (size_t i = 0; i < parts.size() - 1; ++i) {
                if (i > 0) namespacePart += "::";
                namespacePart += parts[i];
                if (!namespacePart.empty()) {
                    std::cout << "Debug [getTypeFromTypeContext]: Registering namespace: " << namespacePart << std::endl;
                    typeRegistry_.registerNamespace(namespacePart);
                }
            }

            std::shared_ptr<Type> type;

            // 1. Try exact qualified name in type registry
            type = typeRegistry_.getCachedType(fullTypeName);
            if (type) {
                std::cout << "Debug [getTypeFromTypeContext]: Found type in cache: " << fullTypeName << std::endl;
                return type;
            }

            // 2. Try runtime registry with full name
            if (runtimeRegistry_.hasClass(fullTypeName)) {
                std::cout << "Debug [getTypeFromTypeContext]: Found type in runtime registry: " << fullTypeName << std::endl;
                type = std::make_shared<ClassType>(fullTypeName);
                typeRegistry_.cacheType(fullTypeName, type);

                // Cache with short name and all possible namespace variations
                std::string shortName = parts.back();
                typeRegistry_.cacheType(shortName, type);

                // Cache with intermediate namespace combinations
                std::string intermediateName;
                for (size_t i = parts.size() - 2; i < parts.size(); ++i) {
                    if (i > parts.size() - 2) intermediateName += "::";
                    intermediateName += parts[i];
                    typeRegistry_.cacheType(intermediateName, type);
                }

                return type;
            }

            // 3. Try namespace resolution
            if (!namespacePart.empty()) {
                std::cout << "Debug [getTypeFromTypeContext]: Checking namespace: " << namespacePart << std::endl;

                // Try direct namespace lookup
                if (typeRegistry_.isNamespaceRegistered(namespacePart)) {
                    std::string resolvedNamespace = typeRegistry_.resolveNamespace(namespacePart);
                    if (!resolvedNamespace.empty()) {
                        std::string resolvedTypeName = resolvedNamespace + "::" + parts.back();
                        std::cout << "Debug [getTypeFromTypeContext]: Trying resolved type name: " << resolvedTypeName << std::endl;

                        // Try resolved name in type registry
                        type = typeRegistry_.getCachedType(resolvedTypeName);
                        if (type) {
                            std::cout << "Debug [getTypeFromTypeContext]: Found type through namespace resolution: " << resolvedTypeName << std::endl;
                            typeRegistry_.cacheType(fullTypeName, type);
                            typeRegistry_.cacheType(parts.back(), type);  // Cache short name too
                            return type;
                        }

                        // Try resolved name in runtime registry
                        if (runtimeRegistry_.hasClass(resolvedTypeName)) {
                            std::cout << "Debug [getTypeFromTypeContext]: Found type in runtime registry through namespace: " << resolvedTypeName << std::endl;
                            type = std::make_shared<ClassType>(resolvedTypeName);
                            typeRegistry_.cacheType(resolvedTypeName, type);
                            typeRegistry_.cacheType(fullTypeName, type);
                            typeRegistry_.cacheType(parts.back(), type);  // Cache short name too
                            return type;
                        }
                    }
                }

                // Try runtime registry with namespace variations
                std::string runtimeTypeName = namespacePart + "::" + parts.back();
                if (runtimeRegistry_.hasClass(runtimeTypeName)) {
                    std::cout << "Debug [getTypeFromTypeContext]: Found type in runtime registry with namespace: " << runtimeTypeName << std::endl;
                    type = std::make_shared<ClassType>(runtimeTypeName);
                    typeRegistry_.cacheType(runtimeTypeName, type);
                    typeRegistry_.cacheType(fullTypeName, type);
                    typeRegistry_.cacheType(parts.back(), type);  // Cache short name too
                    return type;
                }
            }

            // 4. Try short name as last resort
            std::string shortName = parts.back();
            type = typeRegistry_.getCachedType(shortName);
            if (type) {
                std::cout << "Debug [getTypeFromTypeContext]: Found type with short name: " << shortName << std::endl;
                typeRegistry_.cacheType(fullTypeName, type);
                return type;
            }

            // 5. One final attempt with runtime registry and short name
            if (runtimeRegistry_.hasClass(shortName)) {
                std::cout << "Debug [getTypeFromTypeContext]: Found type in runtime registry with short name: " << shortName << std::endl;
                type = std::make_shared<ClassType>(shortName);
                typeRegistry_.cacheType(shortName, type);
                typeRegistry_.cacheType(fullTypeName, type);
                return type;
            }

            // Add detailed debug information about the state of registries
            std::cout << "Debug [getTypeFromTypeContext]: Failed to resolve type. Registry state:" << std::endl;
            std::cout << "Full type name: " << fullTypeName << std::endl;
            std::cout << "Namespace part: " << namespacePart << std::endl;
            std::cout << "Short name: " << shortName << std::endl;
            std::cout << "Namespace registered: " << (typeRegistry_.isNamespaceRegistered(namespacePart) ? "yes" : "no") << std::endl;
            std::cout << "Runtime registry has class (full): " << (runtimeRegistry_.hasClass(fullTypeName) ? "yes" : "no") << std::endl;
            std::cout << "Runtime registry has class (short): " << (runtimeRegistry_.hasClass(shortName) ? "yes" : "no") << std::endl;
            std::cout << "Type registry has cached type (full): " << (typeRegistry_.getCachedType(fullTypeName) ? "yes" : "no") << std::endl;
            std::cout << "Type registry has cached type (short): " << (typeRegistry_.getCachedType(shortName) ? "yes" : "no") << std::endl;

            // One last attempt to register web types if we haven't found the type
            if (fullTypeName.find("pryst::web::") == 0) {
                std::cout << "Debug [getTypeFromTypeContext]: Final attempt to register web types for: " << fullTypeName << std::endl;
                pryst::runtime::web::registerWebTypes(runtimeRegistry_);

                // Check one last time
                type = typeRegistry_.getCachedType(fullTypeName);
                if (type) {
                    std::cout << "Debug [getTypeFromTypeContext]: Found type in final attempt: " << fullTypeName << std::endl;
                    return type;
                }
            }

            throw Error("TypeError", "Unknown qualified type: " + fullTypeName);
        }

        // Handle other type contexts (basic, nullable, array, etc.)
        if (ctx->basicType()) {
            return visit(ctx->basicType());
        }
        if (ctx->nullableType()) {
            return visit(ctx->nullableType());
        }
        if (ctx->arrayType()) {
            return visit(ctx->arrayType());
        }
        if (ctx->mapType()) {
            return visit(ctx->mapType());
        }
        if (ctx->functionType()) {
            return visit(ctx->functionType());
        }

        throw Error("TypeError", "Unknown type: " + ctx->getText());
    } catch (const std::exception& e) {
        std::cerr << "Error [getTypeFromTypeContext]: Exception while processing type: "
                  << ctx->getText() << " - " << e.what() << std::endl;
        throw;
    }
}

std::shared_ptr<Type> TypeChecker::getTypeFromReturnTypeContext(PrystParser::ReturnTypeContext* ctx) {
    std::cout << "Debug [getTypeFromReturnTypeContext]: Processing return type context" << std::endl;

    if (!ctx) {
        std::cerr << "Error [getTypeFromReturnTypeContext]: Null return type context" << std::endl;
        throw Error("TypeError", "Null return type context");
    }

    if (ctx->VOID()) {
        std::cout << "Debug [getTypeFromReturnTypeContext]: Found void return type" << std::endl;
        return VOID_TYPE;
    }

    if (ctx->type()) {
        std::cout << "Debug [getTypeFromReturnTypeContext]: Processing type for return type" << std::endl;
        return getTypeFromTypeContext(ctx->type());
    }

    throw Error("TypeError", "Invalid return type");
}

std::shared_ptr<Type> TypeChecker::visitStatement(PrystParser::StatementContext* ctx) {
    if (ctx->varDecl()) return visit(ctx->varDecl());
    if (ctx->ifStmt()) return visit(ctx->ifStmt());
    if (ctx->whileStmt()) return visit(ctx->whileStmt());
    if (ctx->forStmt()) return visit(ctx->forStmt());
    if (ctx->tryStmt()) return visit(ctx->tryStmt());
    if (ctx->returnStmt()) return visit(ctx->returnStmt());
    if (ctx->expressionStmt()) return visit(ctx->expressionStmt());
    if (ctx->breakStmt()) return visit(ctx->breakStmt());
    if (ctx->continueStmt()) return visit(ctx->continueStmt());
    return pryst::VOID_TYPE;
}

std::shared_ptr<Type> TypeChecker::visitType(PrystParser::TypeContext* ctx) {
    return getTypeFromTypeContext(ctx);
}

std::shared_ptr<Type> TypeChecker::visitMapType(PrystParser::MapTypeContext* ctx) {
    auto keyType = ctx->keyType()->STR() ? pryst::STRING_TYPE : pryst::INT_TYPE;
    auto valueType = getTypeFromTypeContext(ctx->type());
    return std::make_shared<pryst::MapType>(keyType, valueType);
}

std::shared_ptr<Type> TypeChecker::visitFunctionType(PrystParser::FunctionTypeContext* ctx) {
    std::cout << "Debug [visitFunctionType]: Processing function type" << std::endl;

    // Verify correct function type syntax
    if (!ctx->FN() || !ctx->LT() || !ctx->GT() || !ctx->LPAREN() || !ctx->RPAREN()) {
        std::cerr << "Error [visitFunctionType]: Invalid function type syntax" << std::endl;
        throw Error("SyntaxError", "Function type must follow syntax: fn<ReturnType>(ArgTypes)");
    }

    // Use getTypeFromReturnTypeContext for return type
    auto returnType = getTypeFromReturnTypeContext(ctx->returnType());
    std::cout << "Debug [visitFunctionType]: Function return type: " << returnType->toString() << std::endl;

    std::vector<std::shared_ptr<pryst::Type>> paramTypes;
    if (auto typeList = ctx->typeList()) {
        std::cout << "Debug [visitFunctionType]: Processing function parameter types" << std::endl;
        for (auto paramType : typeList->type()) {
            auto pType = getTypeFromTypeContext(paramType);
            std::cout << "Debug [visitFunctionType]: Added parameter type: " << pType->toString() << std::endl;
            paramTypes.push_back(pType);
        }
    }

    auto funcType = std::make_shared<pryst::FunctionType>(returnType, paramTypes);
    std::cout << "Debug [visitFunctionType]: Created function type: " << funcType->toString() << std::endl;
    return funcType;
}

std::shared_ptr<Type> TypeChecker::checkTypesMatch(
    std::shared_ptr<Type> expectedType,
    std::shared_ptr<Type> actualType,
    antlr4::ParserRuleContext* ctx
) {
    std::cout << "Debug [checkTypesMatch]: Checking if " << actualType->toString()
              << " matches expected type " << expectedType->toString() << std::endl;

    if (!isAssignable(expectedType, actualType)) {
        throw Error("TypeError", "Type mismatch: expected " + expectedType->toString() +
                   " but got " + actualType->toString());
    }
    return expectedType;
}

std::any TypeChecker::visitClassDecl(PrystParser::ClassDeclContext* ctx) {
    std::cout << "Debug [visitClassDecl]: Processing class declaration" << std::endl;
    std::string className = ctx->IDENTIFIER(0)->getText();

    // Check if we already have a placeholder class type
    auto existingType = typeRegistry_.getCachedType(className);
    std::shared_ptr<ClassType> classType;

    if (existingType && existingType->getKind() == Type::Kind::Class) {
        std::cout << "Debug [visitClassDecl]: Found existing class type for " << className << std::endl;
        classType = std::static_pointer_cast<ClassType>(existingType);
    } else {
        std::cout << "Debug [visitClassDecl]: Creating new class type for " << className << std::endl;
        classType = std::make_shared<ClassType>(className);
        typeRegistry_.cacheType(className, classType);
    }

    // Process members
    std::vector<std::pair<std::string, llvm::Type*>> members;
    for (auto memberCtx : ctx->classMember()) {
        if (memberCtx->type()) {  // Check if there is a type
            auto memberType = getTypeFromTypeContext(memberCtx->type());
            std::string memberName = memberCtx->IDENTIFIER()->getText();
            std::cout << "Debug [visitClassDecl]: Successfully got type for field " << memberName
                      << " with type " << memberType->toString() << std::endl;

            // Get LLVM type for the member
            llvm::Type* llvmType = typeRegistry_.getLLVMType(memberType);
            if (!llvmType) {
                std::cerr << "Error [visitClassDecl]: Failed to get LLVM type for member " << memberName << std::endl;
                throw Error("TypeError", "Failed to get LLVM type for member " + memberName);
            }

            std::cout << "Debug [visitClassDecl]: Adding field " << memberName
                      << " with type " << memberType->toString() << std::endl;

            // Add member to the class type with proper LLVM type
            members.push_back({memberName, llvmType});
            classType->addField(memberName, memberType);
        }
    }

    // Register or update the class with its members
    if (!typeRegistry_.hasClass(className)) {
        std::cout << "Debug [visitClassDecl]: Registering new class " << className << std::endl;
        typeRegistry_.registerClass(className, members);
    } else {
        std::cout << "Debug [visitClassDecl]: Updating existing class " << className << std::endl;
        // Update existing class registration with new members
        for (const auto& member : members) {
            typeRegistry_.registerMemberIndex(className, member.first, members.size());
        }
    }

    return std::any(classType);
}

std::any TypeChecker::visitNullableChain(PrystParser::NullableChainContext* ctx) {
    std::cout << "Debug [visitNullableChain]: Processing nullable chain" << std::endl;
    auto baseExpr = visit(ctx->expression());
    auto baseType = std::any_cast<std::shared_ptr<Type>>(baseExpr);
    std::cout << "Debug [visitNullableChain]: Base expression type: " << baseType->toString() << std::endl;

    // Handle member access
    if (ctx->IDENTIFIER()) {
        std::string memberName = ctx->IDENTIFIER()->getText();
        std::cout << "Debug [visitNullableChain]: Accessing member: " << memberName << std::endl;
        return checkMemberAccess(std::any(baseType), memberName, true);
    }

    // For method calls, they should be handled by visitNullableMethodCallExpr
    return std::any(baseType);
}

std::any TypeChecker::visitMemberAccessExpr(PrystParser::MemberAccessExprContext* ctx) {
    std::cout << "Debug [visitMemberAccessExpr]: Processing member access" << std::endl;

    auto object = visit(ctx->expression());
    auto objectType = std::any_cast<std::shared_ptr<Type>>(object);
    std::string memberName = ctx->IDENTIFIER()->getText();

    // Use checkMemberAccess which already handles nullable types
    return checkMemberAccess(std::any(objectType), memberName, false);
}

std::any TypeChecker::visitEmptyArrayLiteral(PrystParser::EmptyArrayLiteralContext* ctx) {
    std::cout << "Debug [visitEmptyArrayLiteral]: Processing empty array literal" << std::endl;
    auto typeAny = visit(ctx->type());  // Changed from elementType() to type()
    return std::any(std::make_shared<ArrayType>(std::any_cast<std::shared_ptr<Type>>(typeAny)));
}

std::any TypeChecker::visitNonEmptyArrayLiteral(PrystParser::NonEmptyArrayLiteralContext* ctx) {
    std::cout << "Debug [visitNonEmptyArrayLiteral]: Processing non-empty array literal" << std::endl;
    if (ctx->expression().empty()) {
        throw Error("TypeError", "Array literal must not be empty");
    }

    auto firstExpr = visit(ctx->expression(0));
    auto elementType = std::any_cast<std::shared_ptr<Type>>(firstExpr);

    for (size_t i = 1; i < ctx->expression().size(); ++i) {
        auto exprType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(i)));
        if (!isAssignable(std::any(elementType), std::any(exprType))) {
            throw Error("TypeError", "Inconsistent types in array literal");
        }
    }

    return std::any(std::make_shared<ArrayType>(elementType));
}

std::any TypeChecker::visitEmptyMapLiteral(PrystParser::EmptyMapLiteralContext* ctx) {
    std::cout << "Debug [visitEmptyMapLiteral]: Processing empty map literal" << std::endl;
    auto keyTypeAny = visit(ctx->type(0));    // Changed from keyType() to type(0)
    auto valueTypeAny = visit(ctx->type(1));  // Changed from valueType() to type(1)
    return std::any(std::make_shared<MapType>(
        std::any_cast<std::shared_ptr<Type>>(keyTypeAny),
        std::any_cast<std::shared_ptr<Type>>(valueTypeAny)));
}

std::any TypeChecker::visitNonEmptyMapLiteral(PrystParser::NonEmptyMapLiteralContext* ctx) {
    std::cout << "Debug [visitNonEmptyMapLiteral]: Processing non-empty map literal" << std::endl;
    if (ctx->mapEntry().empty()) {
        throw Error("TypeError", "Map literal must contain at least one element");
    }

    // Visit first entry to get value type
    auto firstEntry = ctx->mapEntry(0);
    auto firstValueAny = visit(firstEntry->expression());
    auto firstValueType = std::any_cast<std::shared_ptr<Type>>(firstValueAny);

    std::cout << "Debug [visitNonEmptyMapLiteral]: First entry value type: " << firstValueType->toString() << std::endl;

    // Check that all entries have compatible types
    for (size_t i = 1; i < ctx->mapEntry().size(); i++) {
        auto entry = ctx->mapEntry(i);
        auto valueAny = visit(entry->expression());
        auto valueType = std::any_cast<std::shared_ptr<Type>>(valueAny);

        std::cout << "Debug [visitNonEmptyMapLiteral]: Entry " << i << " value type: " << valueType->toString() << std::endl;

        if (!isAssignable(firstValueType, valueType)) {
            throw Error("TypeError", "Incompatible value types in map literal");
        }
    }

    return std::any(std::make_shared<pryst::MapType>(pryst::STRING_TYPE, firstValueType));
}

std::any TypeChecker::visitMapEntry(PrystParser::MapEntryContext* ctx) {
    std::cout << "Debug [visitMapEntry]: Processing map entry" << std::endl;
    return visit(ctx->expression());
}

std::any TypeChecker::visitMapKey(PrystParser::MapKeyContext* ctx) {
    std::cout << "Debug [visitMapKey]: Processing map key" << std::endl;
    // Map keys are always strings in Pryst
    return std::any(pryst::STRING_TYPE);
}



std::any TypeChecker::visitNonNullAssertExpr(PrystParser::NonNullAssertExprContext* ctx) {
    std::cout << "Debug [visitNonNullAssertExpr]: Processing non-null assertion" << std::endl;
    auto exprType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression()));

    if (exprType->getKind() != Type::Kind::Nullable) {
        throw Error("TypeError", "Non-null assertion can only be used on nullable types");
    }

    auto nullableType = std::static_pointer_cast<NullableType>(exprType);
    std::cout << "Debug [visitNonNullAssertExpr]: Unwrapping nullable type: "
              << nullableType->getInnerType()->toString() << std::endl;
    return std::any(nullableType->getInnerType());
}

bool TypeChecker::isAssignable(std::any targetTypeAny, std::any sourceTypeAny) {
    auto targetType = std::any_cast<std::shared_ptr<Type>>(targetTypeAny);
    auto sourceType = std::any_cast<std::shared_ptr<Type>>(sourceTypeAny);

    std::cout << "Debug [isAssignable]: Checking if " << sourceType->toString()
              << " is assignable to " << targetType->toString() << std::endl;

    // Handle null assignment to nullable types
    if (sourceType->getKind() == Type::Kind::Null) {
        bool isNullable = typeRegistry_.isTypeNullable(typeRegistry_.convertTypeToLLVMType(targetType));
        std::cout << "Debug [isAssignable]: Source is null, target "
                  << (isNullable ? "is" : "is not") << " nullable" << std::endl;
        return isNullable;
    }

    // Handle nullable source types
    if (sourceType->getKind() == Type::Kind::Nullable) {
        auto nullableSource = std::static_pointer_cast<NullableType>(sourceType);
        return isAssignable(std::any(targetType), std::any(nullableSource->getInnerType()));
    }

    // Handle nullable target types
    if (targetType->getKind() == Type::Kind::Nullable) {
        auto nullableTarget = std::static_pointer_cast<NullableType>(targetType);
        return isAssignable(std::any(nullableTarget->getInnerType()), std::any(sourceType));
    }

    // Direct type equality
    if (targetType->toString() == sourceType->toString()) {
        std::cout << "Debug [isAssignable]: Types match exactly" << std::endl;
        return true;
    }

    // Array type compatibility
    if (targetType->getKind() == Type::Kind::Array && sourceType->getKind() == Type::Kind::Array) {
        auto targetArray = std::static_pointer_cast<ArrayType>(targetType);
        auto sourceArray = std::static_pointer_cast<ArrayType>(sourceType);
        return isAssignable(targetArray->getElementType(), sourceArray->getElementType());
    }

    // Map type compatibility
    if (targetType->getKind() == Type::Kind::Map && sourceType->getKind() == Type::Kind::Map) {
        auto targetMap = std::static_pointer_cast<MapType>(targetType);
        auto sourceMap = std::static_pointer_cast<MapType>(sourceType);
        return isAssignable(targetMap->getKeyType(), sourceMap->getKeyType()) &&
               isAssignable(targetMap->getValueType(), sourceMap->getValueType());
    }

    // Function type compatibility
    if (targetType->getKind() == Type::Kind::Function && sourceType->getKind() == Type::Kind::Function) {
        auto targetFunc = std::static_pointer_cast<FunctionType>(targetType);
        auto sourceFunc = std::static_pointer_cast<FunctionType>(sourceType);

        // Check return type compatibility
        if (!isAssignable(targetFunc->getReturnType(), sourceFunc->getReturnType())) {
            return false;
        }

        // Check parameter types compatibility
        auto& targetParams = targetFunc->getParamTypes();
        auto& sourceParams = sourceFunc->getParamTypes();

        if (targetParams.size() != sourceParams.size()) {
            return false;
        }

        for (size_t i = 0; i < targetParams.size(); i++) {
            if (!isAssignable(targetParams[i], sourceParams[i])) {
                return false;
            }
        }
        return true;
    }

    // Handle numeric type conversions (int to float)
    if (targetType->getKind() == Type::Kind::Float && sourceType->getKind() == Type::Kind::Int) {
        std::cout << "Debug [isAssignable]: Allowing int to float conversion" << std::endl;
        return true;
    }

    std::cout << "Debug [isAssignable]: Types are not assignable" << std::endl;
    return false;
}

std::any TypeChecker::visitKeyType(PrystParser::KeyTypeContext* ctx) {
    std::cout << "Debug [visitKeyType]: Processing key type" << std::endl;
    if (ctx->STR()) {
        return std::any(STRING_TYPE);
    } else if (ctx->INT()) {
        return std::any(INT_TYPE);
    }
    throw Error("TypeError", "Invalid key type");
}

std::any TypeChecker::visitPrimary(PrystParser::PrimaryContext* ctx) {
    std::cout << "Debug [visitPrimary]: Processing primary expression" << std::endl;

    if (ctx->NULL_LIT()) {
        std::cout << "Debug [visitPrimary]: Found null literal" << std::endl;
        return std::any(NULL_TYPE);
    }

    if (ctx->IDENTIFIER()) {
        std::cout << "Debug [visitPrimary]: Found identifier: " << ctx->IDENTIFIER()->getText() << std::endl;
        return std::any(lookupVariable(ctx->IDENTIFIER()->getText()));
    }

    if (ctx->INTEGER()) {
        std::cout << "Debug [visitPrimary]: Found integer literal" << std::endl;
        return std::any(INT_TYPE);
    }

    if (ctx->FLOAT_LITERAL()) {
        std::cout << "Debug [visitPrimary]: Found float literal" << std::endl;
        return std::any(FLOAT_TYPE);
    }

    if (ctx->BOOLEAN()) {
        std::cout << "Debug [visitPrimary]: Found boolean literal" << std::endl;
        return std::any(BOOL_TYPE);
    }

    if (ctx->STRING()) {
        std::cout << "Debug [visitPrimary]: Found string literal" << std::endl;
        return std::any(STRING_TYPE);
    }

    std::cout << "Debug [visitPrimary]: Delegating to child nodes" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitStringInterpolation(PrystParser::StringInterpolationContext* ctx) {
    std::cout << "Debug [visitStringInterpolation]: Processing string interpolation" << std::endl;
    for (auto expr : ctx->expression()) {
        auto exprType = visit(expr);
        std::cout << "Debug [visitStringInterpolation]: Expression type: " << std::any_cast<std::shared_ptr<Type>>(exprType)->toString() << std::endl;
    }
    return std::any(STRING_TYPE);
}

std::any TypeChecker::visitIdentifierList(PrystParser::IdentifierListContext* ctx) {
    std::cout << "Debug [visitIdentifierList]: Processing identifier list" << std::endl;
    std::vector<std::string> identifiers;
    for (auto id : ctx->IDENTIFIER()) {
        identifiers.push_back(id->getText());
    }
    return std::any(identifiers);
}

std::any TypeChecker::visitGenericParams(PrystParser::GenericParamsContext* ctx) {
    std::cout << "Debug [visitGenericParams]: Processing generic parameters" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitGenericArgs(PrystParser::GenericArgsContext* ctx) {
    std::cout << "Debug [visitGenericArgs]: Processing generic arguments" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitInterfaceMember(PrystParser::InterfaceMemberContext* ctx) {
    std::cout << "Debug [visitInterfaceMember]: Processing interface member" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitClassMember(PrystParser::ClassMemberContext* ctx) {
    std::cout << "Debug [visitClassMember]: Processing class member" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitOverloadParams(PrystParser::OverloadParamsContext* ctx) {
    std::cout << "Debug [visitOverloadParams]: Processing overload parameters" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitConstructorDecl(PrystParser::ConstructorDeclContext* ctx) {
    std::cout << "Debug [visitConstructorDecl]: Processing constructor declaration" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitConstructorBlock(PrystParser::ConstructorBlockContext* ctx) {
    std::cout << "Debug [visitConstructorBlock]: Processing constructor block" << std::endl;
    pushScope();
    auto result = visitChildren(ctx);
    popScope();
    return result;
}

std::any TypeChecker::visitTypeList(PrystParser::TypeListContext* ctx) {
    std::cout << "Debug [visitTypeList]: Processing type list" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitStringLiteral(PrystParser::StringLiteralContext* ctx) {
    std::cout << "Debug [visitStringLiteral]: Processing string literal" << std::endl;
    return std::any(STRING_TYPE);
}

std::any TypeChecker::visitLambdaParams(PrystParser::LambdaParamsContext* ctx) {
    std::cout << "Debug [visitLambdaParams]: Processing lambda parameters" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitImportPath(PrystParser::ImportPathContext* ctx) {
    std::cout << "Debug [visitImportPath]: Processing import path" << std::endl;
    return std::any(VOID_TYPE);
}

std::any TypeChecker::visitChainedCall(PrystParser::ChainedCallContext* ctx) {
    std::cout << "Debug [visitChainedCall]: Processing chained call" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitProgram(PrystParser::ProgramContext* ctx) {
    std::cout << "Debug [visitProgram]: Processing program" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitBlock(PrystParser::BlockContext* ctx) {
    std::cout << "Debug [visitBlock]: Processing block" << std::endl;
    pushScope();
    auto result = visitChildren(ctx);
    popScope();
    return result;
}

std::any TypeChecker::visitVarDecl(PrystParser::VarDeclContext* ctx) {
    std::cout << "Debug [visitVarDecl]: Processing variable declaration" << std::endl;

    auto identList = ctx->identifierList();
    if (!identList) {
        throw Error("InternalError", "Variable declaration missing identifier list");
    }

    std::shared_ptr<Type> varType;
    if (ctx->type()) {
        auto typeAny = getTypeFromTypeContext(ctx->type());
        varType = std::any_cast<std::shared_ptr<Type>>(typeAny);
    } else if (ctx->expression()) {
        auto exprAny = visit(ctx->expression());
        varType = std::any_cast<std::shared_ptr<Type>>(exprAny);
    } else {
        throw Error("InternalError", "Variable declaration missing both type and initializer");
    }

    // Handle all identifiers in the list
    for (auto ident : identList->IDENTIFIER()) {
        std::string varName = ident->getText();
        std::cout << "Debug [visitVarDecl]: Declaring variable " << varName
                  << " with type " << varType->toString() << std::endl;
        declareVariable(varName, varType);
    }

    // Type check initializer if present
    if (ctx->expression()) {
        auto initAny = visit(ctx->expression());
        auto initType = std::any_cast<std::shared_ptr<Type>>(initAny);
        if (!isAssignable(varType, initType)) {
            throw Error("TypeError", "Cannot assign " + initType->toString() + " to " + varType->toString());
        }
    }

    return std::any(varType);
}

std::any TypeChecker::visitIfStmt(PrystParser::IfStmtContext* ctx) {
    std::cout << "Debug [visitIfStmt]: Processing if statement" << std::endl;
    auto condType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression()));
    if (!isAssignable(BOOL_TYPE, condType)) {
        throw Error("TypeError", "If condition must be boolean");
    }
    return visitChildren(ctx);
}

std::any TypeChecker::visitWhileStmt(PrystParser::WhileStmtContext* ctx) {
    std::cout << "Debug [visitWhileStmt]: Processing while statement" << std::endl;
    auto condType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression()));
    if (!isAssignable(BOOL_TYPE, condType)) {
        throw Error("TypeError", "While condition must be boolean");
    }
    return visitChildren(ctx);
}

std::any TypeChecker::visitForStmt(PrystParser::ForStmtContext* ctx) {
    std::cout << "Debug [visitForStmt]: Processing for statement" << std::endl;
    pushScope();

    if (ctx->IN()) {  // For-in loop
        std::cout << "Debug [visitForStmt]: Processing for-in loop" << std::endl;
        auto iterableType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
        if (iterableType->getKind() != Type::Kind::Array) {
            throw Error("TypeError", "For-in loop requires array type");
        }

        auto arrayType = std::static_pointer_cast<ArrayType>(iterableType);
        declareVariable(ctx->IDENTIFIER()->getText(), arrayType->getElementType());

    } else {  // C-style for loop
        std::cout << "Debug [visitForStmt]: Processing C-style for loop" << std::endl;
        // Handle initialization
        if (ctx->varDecl()) {
            visit(ctx->varDecl());
        } else if (ctx->expressionStmt()) {
            visit(ctx->expressionStmt());
        }

        // Check condition if present
        if (ctx->expression().size() > 0) {
            auto condType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
            if (!isAssignable(BOOL_TYPE, condType)) {
                throw Error("TypeError", "For loop condition must be boolean");
            }
        }

        // Handle increment expression if present
        if (ctx->expression().size() > 1) {
            visit(ctx->expression(1));
        }
    }

    // Visit the loop body
    auto result = visit(ctx->statement());
    popScope();
    return result;
}

std::any TypeChecker::visitReturnStmt(PrystParser::ReturnStmtContext* ctx) {
    std::cout << "Debug [visitReturnStmt]: Processing return statement" << std::endl;
    if (ctx->expression()) {
        return visit(ctx->expression());
    }
    return std::any(VOID_TYPE);
}

std::any TypeChecker::visitTryStmt(PrystParser::TryStmtContext* ctx) {
    std::cout << "Debug [visitTryStmt]: Processing try statement" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitBreakStmt(PrystParser::BreakStmtContext* ctx) {
    std::cout << "Debug [visitBreakStmt]: Processing break statement" << std::endl;
    return std::any(VOID_TYPE);
}

std::any TypeChecker::visitContinueStmt(PrystParser::ContinueStmtContext* ctx) {
    std::cout << "Debug [visitContinueStmt]: Processing continue statement" << std::endl;
    return std::any(VOID_TYPE);
}

std::any TypeChecker::visitExpressionStmt(PrystParser::ExpressionStmtContext* ctx) {
    std::cout << "Debug [visitExpressionStmt]: Processing expression statement" << std::endl;
    return visit(ctx->expression());
}

std::any TypeChecker::visitArguments(PrystParser::ArgumentsContext* ctx) {
    std::cout << "Debug [visitArguments]: Processing function arguments" << std::endl;
    std::vector<std::shared_ptr<Type>> argTypes;
    if (ctx && ctx->expression().size() > 0) {
        for (auto expr : ctx->expression()) {
            auto argType = std::any_cast<std::shared_ptr<Type>>(visit(expr));
            std::cout << "Debug [visitArguments]: Argument type: " << argType->toString() << std::endl;
            argTypes.push_back(argType);
        }
    }
    return std::any(std::make_shared<std::vector<std::shared_ptr<Type>>>(argTypes));
}

std::any TypeChecker::visitImportDecl(PrystParser::ImportDeclContext* ctx) {
    std::cout << "Debug [visitImportDecl]: Processing import declaration" << std::endl;

    // Get the import path
    auto importPath = ctx->importPath();
    if (!importPath) {
        throw Error("ImportError", "Invalid import declaration - missing path");
    }

    // Build the full namespace path and register all parent namespaces
    std::string currentPath = "";
    std::vector<std::string> identifiers;
    for (auto identifier : importPath->IDENTIFIER()) {
        identifiers.push_back(identifier->getText());
        if (!currentPath.empty()) currentPath += "::";
        currentPath += identifier->getText();
        std::cout << "Debug [visitImportDecl]: Registering parent namespace: " << currentPath << std::endl;
        typeRegistry_.registerNamespace(currentPath);
    }

    // Build and register the full path
    std::string fullPath = "";
    for (size_t i = 0; i < identifiers.size(); ++i) {
        if (!fullPath.empty()) fullPath += "::";
        fullPath += identifiers[i];
    }
    std::cout << "Debug [visitImportDecl]: Full import path: " << fullPath << std::endl;
    typeRegistry_.registerNamespace(fullPath);

    // Pre-register all known types in this namespace
    if (fullPath == "pryst::web") {
        std::cout << "Debug [visitImportDecl]: Pre-registering web types" << std::endl;
        // Ensure web types are registered before processing the rest of the import
        pryst::runtime::web::registerWebTypes(this->runtimeRegistry_);

        // Make sure all web types are cached in the type registry with both full and short names
        const std::vector<std::string> webTypes = {
            "pryst::web::Request",
            "pryst::web::Response",
            "pryst::web::WebServer"
        };

        for (const auto& typeName : webTypes) {
            if (auto classType = runtimeRegistry_.getClass(typeName)) {
                auto sharedType = std::make_shared<ClassType>(typeName);
                // Cache with full qualified name
                typeRegistry_.cacheType(typeName, sharedType);
                // Cache with short name
                size_t lastSeparator = typeName.rfind("::");
                if (lastSeparator != std::string::npos) {
                    std::string shortName = typeName.substr(lastSeparator + 2);
                    typeRegistry_.cacheType(shortName, sharedType);
                }
            }
        }
    }

    if (ctx->FROM()) {
        // FROM importPath IMPORT IDENTIFIER (COMMA IDENTIFIER)*
        std::cout << "Debug [visitImportDecl]: Processing FROM import" << std::endl;
        for (auto identifier : ctx->IDENTIFIER()) {
            std::string importedName = identifier->getText();
            std::string fullTypeName = fullPath + "::" + importedName;
            std::cout << "Debug [visitImportDecl]: Importing " << importedName << " from " << fullPath << std::endl;

            // Register namespace alias
            typeRegistry_.registerNamespaceAlias(importedName, fullTypeName);

            // If this is a web type, ensure it's registered in both registries
            if (fullPath == "pryst::web") {
                if (auto classType = runtimeRegistry_.getClass(fullTypeName)) {
                    std::cout << "Debug [visitImportDecl]: Registering web type: " << fullTypeName << std::endl;
                    auto sharedType = std::make_shared<ClassType>(fullTypeName);
                    typeRegistry_.cacheType(fullTypeName, sharedType);
                    typeRegistry_.cacheType(importedName, sharedType);
                }
            }
        }
    } else if (ctx->AS() && !ctx->IDENTIFIER().empty()) {
        // IMPORT importPath AS IDENTIFIER
        std::string alias = ctx->IDENTIFIER()[0]->getText();
        std::cout << "Debug [visitImportDecl]: Registering alias " << alias << " for " << fullPath << std::endl;
        typeRegistry_.registerNamespaceAlias(alias, fullPath);
    }

    auto result = visitChildren(ctx);
    return std::any(std::any_cast<std::shared_ptr<Type>>(result));
}

std::any TypeChecker::visitDeclaration(PrystParser::DeclarationContext* ctx) {
    std::cout << "Debug [visitDeclaration]: Processing declaration" << std::endl;
    return visitChildren(ctx);
}

std::any TypeChecker::visitFunctionDecl(PrystParser::FunctionDeclContext* ctx) {
    std::cout << "Debug [visitFunctionDecl]: Processing function declaration" << std::endl;

    // Get function name
    std::string functionName = ctx->IDENTIFIER()->getText();
    std::cout << "Debug [visitFunctionDecl]: Function name: " << functionName << std::endl;

    // Get return type
    auto returnTypeAny = getTypeFromReturnTypeContext(ctx->returnType());
    auto returnType = std::any_cast<std::shared_ptr<Type>>(returnTypeAny);
    std::cout << "Debug [visitFunctionDecl]: Function return type: " << returnType->toString() << std::endl;

    // Create new scope for parameters
    pushScope();

    // Process parameters and get their types
    std::vector<std::shared_ptr<Type>> paramTypes;
    if (ctx->parameters()) {
        auto paramsAny = visit(ctx->parameters());
        auto params = std::any_cast<std::shared_ptr<std::vector<std::shared_ptr<Type>>>>(paramsAny);
        paramTypes = *params;
    }

    // Create function type
    auto functionType = std::make_shared<FunctionType>(returnType, paramTypes);

    // Register function in global scope (first scope)
    if (!scopes.empty()) {
        scopes.front()[functionName] = functionType;
        std::cout << "Debug [visitFunctionDecl]: Registered function " << functionName
                  << " in global scope with type " << functionType->toString() << std::endl;
    }

    // Process function body
    auto result = visit(ctx->block());

    popScope();
    return result;
}

std::any TypeChecker::visitParameters(PrystParser::ParametersContext* ctx) {
    std::cout << "Debug [visitParameters]: Processing parameters" << std::endl;
    std::vector<std::shared_ptr<Type>> paramTypes;
    if (ctx && ctx->parameter().size() > 0) {
        for (auto param : ctx->parameter()) {
            auto paramType = std::any_cast<std::shared_ptr<Type>>(visit(param));
            paramTypes.push_back(paramType);
        }
    }
    return std::any(std::make_shared<std::vector<std::shared_ptr<Type>>>(paramTypes));
}

std::any TypeChecker::visitParameter(PrystParser::ParameterContext* ctx) {
    std::cout << "Debug [visitParameter]: Processing parameter: " << ctx->IDENTIFIER()->getText() << std::endl;

    auto typeCtx = ctx->type();
    if (!typeCtx) {
        throw Error("TypeError", "Parameter missing type");
    }

    std::string rawTypeName = typeCtx->getText();
    std::cout << "Debug [visitParameter]: Raw type name: " << rawTypeName << std::endl;

    // Try to get the type from cache first
    std::shared_ptr<Type> paramType = typeRegistry_.getCachedType(rawTypeName);

    if (!paramType) {
        // If not in cache, try to resolve it
        paramType = std::any_cast<std::shared_ptr<Type>>(getTypeFromTypeContext(typeCtx));
        if (!paramType) {
            throw Error("TypeError", "Failed to resolve type for parameter: " + rawTypeName);
        }
        std::cout << "Debug [visitParameter]: Resolved parameter type: " << paramType->toString() << std::endl;

        // Cache the resolved type
        typeRegistry_.cacheType(rawTypeName, paramType);

        // If it's a qualified name, also cache the short name
        size_t lastSeparator = rawTypeName.rfind("::");
        if (lastSeparator != std::string::npos) {
            std::string shortName = rawTypeName.substr(lastSeparator + 2);
            typeRegistry_.cacheType(shortName, paramType);
        }
    } else {
        std::cout << "Debug [visitParameter]: Found type in cache: " << paramType->toString() << std::endl;
    }

    declareVariable(ctx->IDENTIFIER()->getText(), paramType);
    return std::any(paramType);
}

std::any TypeChecker::visitAssignment(PrystParser::AssignmentContext* ctx) {
    std::cout << "Debug [visitAssignment]: Processing assignment" << std::endl;
    auto lhsType = visit(ctx->expression(0));
    auto rhsType = visit(ctx->expression(1));
    if (!isAssignable(std::any_cast<std::shared_ptr<Type>>(lhsType),
                      std::any_cast<std::shared_ptr<Type>>(rhsType))) {
        throw Error("TypeError", "Cannot assign " +
                   std::any_cast<std::shared_ptr<Type>>(rhsType)->toString() + " to " +
                   std::any_cast<std::shared_ptr<Type>>(lhsType)->toString());
    }
    return lhsType;
}

std::any TypeChecker::visitFunctionCallExpr(PrystParser::FunctionCallExprContext* ctx) {
    std::cout << "Debug [visitFunctionCallExpr]: Processing function call expression" << std::endl;

    // Handle primitive type conversions (str, int, float, bool)
    if (ctx->IDENTIFIER() &&
        (ctx->IDENTIFIER()->getText() == "str" ||
         ctx->IDENTIFIER()->getText() == "int" ||
         ctx->IDENTIFIER()->getText() == "float" ||
         ctx->IDENTIFIER()->getText() == "bool")) {

        std::string functionName = ctx->IDENTIFIER()->getText();
        std::shared_ptr<Type> targetType;
        if (functionName == "str") targetType = STRING_TYPE;
        else if (functionName == "int") targetType = INT_TYPE;
        else if (functionName == "float") targetType = FLOAT_TYPE;
        else targetType = BOOL_TYPE;

        auto args = ctx->arguments();
        if (!args || args->expression().empty()) {
            throw Error("TypeError", functionName + " conversion requires one argument");
        }

        auto sourceAny = visit(args->expression(0));
        auto sourceType = std::any_cast<std::shared_ptr<Type>>(sourceAny);
        if (!isAssignable(std::any(targetType), std::any(sourceType))) {
            throw Error("TypeError", "Cannot convert " + sourceType->toString() + " to " + targetType->toString());
        }
        return std::any(targetType);
    }

    // Get function type from identifier or expression
    std::shared_ptr<Type> functionType;
    if (ctx->IDENTIFIER()) {
        auto funcName = ctx->IDENTIFIER()->getText();
        if (currentScope_ && currentScope_->find(funcName) == currentScope_->end()) {
            throw Error("TypeError", "Function '" + funcName + "' not found");
        }
        auto funcAny = (*currentScope_)[funcName];
        functionType = std::any_cast<std::shared_ptr<Type>>(funcAny);
    } else if (ctx->expression()) {
        auto exprAny = visit(ctx->expression());
        functionType = std::any_cast<std::shared_ptr<Type>>(exprAny);
        if (!std::dynamic_pointer_cast<FunctionType>(functionType)) {
            throw Error("TypeError", "Expression is not callable");
        }
    } else {
        throw Error("TypeError", "Invalid function call expression");
    }

    // Check if the type is actually a function type
    auto funcType = std::dynamic_pointer_cast<FunctionType>(functionType);
    if (!funcType) {
        throw Error("TypeError", "Expression is not callable");
    }

    if (auto funcType = std::dynamic_pointer_cast<FunctionType>(functionType)) {
        std::vector<std::shared_ptr<Type>> argTypes;
        if (ctx->arguments()) {
            for (auto arg : ctx->arguments()->expression()) {
                argTypes.push_back(std::any_cast<std::shared_ptr<Type>>(visit(arg)));
            }
        }

        if (argTypes.size() != funcType->getParamTypes().size()) {
            throw Error("TypeError", "Wrong number of arguments");
        }

        for (size_t i = 0; i < argTypes.size(); i++) {
            if (!isAssignable(std::any(funcType->getParamTypes()[i]), std::any(argTypes[i]))) {
                throw Error("TypeError", "Argument type mismatch");
            }
        }

        return std::any(funcType->getReturnType());
    }
    throw Error("TypeError", "Expression is not callable");
}

std::any TypeChecker::visitInterfaceDecl(PrystParser::InterfaceDeclContext* ctx) {
    auto interfaceName = ctx->IDENTIFIER(0)->getText();
    auto interfaceType = std::make_shared<InterfaceType>(interfaceName);
    typeRegistry_.registerInterfaceType(interfaceType);
    return std::any(interfaceType);
}

std::any TypeChecker::visitBasicType(PrystParser::BasicTypeContext* ctx) {
    std::cout << "Debug [visitBasicType]: Processing basic type" << std::endl;
    std::shared_ptr<Type> type;

    if (ctx->STR()) type = STRING_TYPE;
    else if (ctx->INT()) type = INT_TYPE;
    else if (ctx->FLOAT()) type = FLOAT_TYPE;
    else if (ctx->BOOL()) type = BOOL_TYPE;
    else if (ctx->VOID()) type = VOID_TYPE;
    else if (ctx->IDENTIFIER()) {
        auto typeName = ctx->IDENTIFIER()->getText();
        type = typeRegistry_.getCachedType(typeName);
        if (!type) {
            std::cout << "Debug [visitBasicType]: Type " << typeName << " not found in cache, creating and registering class type" << std::endl;
            type = std::make_shared<ClassType>(typeName);
            typeRegistry_.cacheType(typeName, type);
            if (!typeRegistry_.hasClass(typeName)) {
                std::cout << "Debug [visitBasicType]: Registering new class " << typeName << " with TypeRegistry" << std::endl;
                typeRegistry_.registerClass(typeName, {});
            }
            std::cout << "Debug [visitBasicType]: Successfully registered class type: " << typeName << std::endl;
        }
    } else {
        throw Error("TypeError", "Unknown basic type");
    }

    std::cout << "Debug [visitBasicType]: Created type: " << type->toString() << std::endl;
    return std::any(type);
}

std::any TypeChecker::visitArrayType(PrystParser::ArrayTypeContext* ctx) {
    std::cout << "Debug [visitArrayType]: Processing array type" << std::endl;
    auto typeAny = visit(ctx->basicType());  // Use basicType() for the base case
    auto elementType = std::any_cast<std::shared_ptr<Type>>(typeAny);
    return std::any(std::make_shared<ArrayType>(elementType));
}

std::any TypeChecker::visitAssignmentExpr(PrystParser::AssignmentExprContext* ctx) {
    std::cout << "Debug [visitAssignmentExpr]: Processing assignment expression" << std::endl;
    auto left = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
    auto right = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(1)));

    if (!isAssignable(left, right)) {
        throw Error("TypeError", "Cannot assign " + right->toString() + " to " + left->toString());
    }
    return std::any(right);
}

std::any TypeChecker::visitLogicalAndExpr(PrystParser::LogicalAndExprContext* ctx) {
    std::cout << "Debug [visitLogicalAndExpr]: Processing logical AND expression" << std::endl;
    auto left = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
    auto right = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(1)));

    if (left != BOOL_TYPE || right != BOOL_TYPE) {
        throw Error("TypeError", "Logical operators require boolean operands");
    }
    return std::any(BOOL_TYPE);
}

std::any TypeChecker::visitInstanceofExpr(PrystParser::InstanceofExprContext* ctx) {
    std::cout << "Debug [visitInstanceofExpr]: Processing instanceof expression" << std::endl;

    // Get the expression type
    auto exprType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression()));

    // Get the target type from the type context
    auto targetType = getTypeFromTypeContext(ctx->type());

    std::cout << "Debug [visitInstanceofExpr]: Checking if " << exprType->toString()
              << " is instanceof " << targetType->toString() << std::endl;

    // Handle nullable types - unwrap if necessary
    if (exprType->getKind() == Type::Kind::Nullable) {
        auto nullableType = std::static_pointer_cast<NullableType>(exprType);
        exprType = nullableType->getInnerType();
    }

    // Check if types are compatible
    bool isInstance = isAssignable(std::any(targetType), std::any(exprType));

    std::cout << "Debug [visitInstanceofExpr]: Result: " << (isInstance ? "true" : "false") << std::endl;

    // instanceof always returns a boolean
    return std::any(BOOL_TYPE);
}

std::any TypeChecker::visitTypeofExpr(PrystParser::TypeofExprContext* ctx) {
    std::cout << "Debug [visitTypeofExpr]: Processing typeof expression" << std::endl;

    // Get the expression type
    auto exprType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression()));

    std::cout << "Debug [visitTypeofExpr]: Expression type: " << exprType->toString() << std::endl;

    // typeof always returns a string representing the type
    return std::any(STRING_TYPE);
}

std::any TypeChecker::visitCastExpr(PrystParser::CastExprContext* ctx) {
    std::cout << "Debug [visitCastExpr]: Processing cast expression" << std::endl;
    auto targetType = getTypeFromTypeContext(ctx->type());
    auto exprType = visit(ctx->expression());
    if (!isAssignable(std::any_cast<std::shared_ptr<Type>>(targetType),
                      std::any_cast<std::shared_ptr<Type>>(exprType))) {
        throw Error("TypeError", "Cannot cast " +
                   std::any_cast<std::shared_ptr<Type>>(exprType)->toString() +
                   " to " +
                   std::any_cast<std::shared_ptr<Type>>(targetType)->toString());
    }
    return targetType;
}

std::any TypeChecker::visitAdditiveExpr(PrystParser::AdditiveExprContext* ctx) {
    std::cout << "Debug [visitAdditiveExpr]: Processing additive expression" << std::endl;
    auto left = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
    auto right = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(1)));

    if (left == INT_TYPE && right == INT_TYPE) return std::any(INT_TYPE);
    if (left == FLOAT_TYPE || right == FLOAT_TYPE) return std::any(FLOAT_TYPE);
    if (left == STRING_TYPE && ctx->op->getType() == PrystParser::PLUS) return std::any(STRING_TYPE);

    throw Error("TypeError", "Invalid operands for additive expression");
}

std::any TypeChecker::visitRelationalExpr(PrystParser::RelationalExprContext* ctx) {
    std::cout << "Debug [visitRelationalExpr]: Processing relational expression" << std::endl;
    auto left = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
    auto right = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(1)));

    if (!isAssignable(left, right) && !isAssignable(right, left)) {
        throw Error("TypeError", "Cannot compare incompatible types");
    }
    return std::any(BOOL_TYPE);
}

std::any TypeChecker::visitParenExpr(PrystParser::ParenExprContext* ctx) {
    std::cout << "Debug [visitParenExpr]: Processing parenthesized expression" << std::endl;
    return visit(ctx->expression());
}

std::any TypeChecker::visitPrefixExpr(PrystParser::PrefixExprContext* ctx) {
    std::string op;
    if (ctx->prefix) {  // Access the prefix token directly
        op = ctx->prefix->getText();
    }

    auto exprAny = visit(ctx->expression());
    auto operand = std::any_cast<std::shared_ptr<Type>>(exprAny);

    if (op == "-" || op == "+") {
        if (operand == INT_TYPE || operand == FLOAT_TYPE) {
            return std::any(operand);
        }
    } else if (op == "!") {
        if (operand == BOOL_TYPE) {
            return std::any(BOOL_TYPE);
        }
    }

    throw Error("TypeError", "Invalid operand type for prefix operator " + op);
}

std::any TypeChecker::visitLogicalOrExpr(PrystParser::LogicalOrExprContext* ctx) {
    std::cout << "Debug [visitLogicalOrExpr]: Processing logical OR expression" << std::endl;
    auto left = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
    auto right = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(1)));

    if (left != BOOL_TYPE || right != BOOL_TYPE) {
        throw Error("TypeError", "Logical operators require boolean operands");
    }
    return std::any(BOOL_TYPE);
}



std::any TypeChecker::visitMethodCallExpr(PrystParser::MethodCallExprContext* ctx) {
    std::cout << "Debug [visitMethodCallExpr]: Processing method call" << std::endl;

    // Get the object type
    auto objType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression()));
    std::cout << "Debug [visitMethodCallExpr]: Object type: " << objType->toString() << std::endl;

    // Get the method name
    std::string methodName = ctx->IDENTIFIER()->getText();
    std::cout << "Debug [visitMethodCallExpr]: Method name: " << methodName << std::endl;

    // Handle nullable types
    if (typeRegistry_.isTypeNullable(typeRegistry_.convertTypeToLLVMType(objType))) {
        if (auto nullableType = std::dynamic_pointer_cast<NullableType>(objType)) {
            objType = nullableType->getInnerType();
        }
    }

    // Handle class types

    // Handle class types
    if (objType->getKind() == Type::Kind::Class) {
        auto classType = std::static_pointer_cast<ClassType>(objType);

        // Look up the method
        auto methodType = classType->getMethod(methodName);
        if (!methodType) {
            throw Error("TypeError", "Method '" + methodName + "' not found on type " + objType->toString());
        }

        // Verify method type is a function type
        auto functionType = std::dynamic_pointer_cast<FunctionType>(methodType);
        if (!functionType) {
            throw Error("TypeError", "Member '" + methodName + "' is not a method on type " + objType->toString());
        }

        // Process arguments if they exist
        std::vector<std::shared_ptr<Type>> argTypes;
        if (ctx->arguments()) {
            for (auto arg : ctx->arguments()->expression()) {
                auto argType = std::any_cast<std::shared_ptr<Type>>(visit(arg));
                argTypes.push_back(argType);
            }
        }

        // Check argument count
        if (argTypes.size() != functionType->getParamTypes().size()) {
            throw Error("TypeError", "Wrong number of arguments for method '" + methodName + "'");
        }

        // Check argument types
        for (size_t i = 0; i < argTypes.size(); i++) {
            if (!isAssignable(std::any(functionType->getParamTypes()[i]), std::any(argTypes[i]))) {
                throw Error("TypeError", "Argument type mismatch for method '" + methodName + "'");
            }
        }

        return std::any(functionType->getReturnType());
    }

    throw Error("TypeError", "Cannot call methods on non-class type: " + objType->toString());
}

std::any TypeChecker::visitNullableChain(PrystParser::NullableChainContext* ctx) {
    std::cout << "Debug [visitNullableChain]: Processing nullable chain expression" << std::endl;

    // Get the base expression type
    auto baseExpr = visit(ctx->expression());
    auto baseType = std::any_cast<std::shared_ptr<Type>>(baseExpr);

    // Check if the base type is nullable
    if (!typeRegistry_.isTypeNullable(typeRegistry_.convertTypeToLLVMType(baseType))) {
        throw Error("TypeError", "Cannot use ?. operator on non-nullable type " + baseType->toString());
    }

    // Get the member access or method call type
    std::shared_ptr<Type> resultType;
    if (ctx->IDENTIFIER()) {
        // Member access
        std::string memberName = ctx->IDENTIFIER()->getText();
        if (auto classType = std::dynamic_pointer_cast<ClassType>(baseType)) {
            resultType = classType->getMember(memberName);
            if (!resultType) {
                throw Error("TypeError", "Member '" + memberName + "' not found on type " + baseType->toString());
            }
        } else {
            throw Error("TypeError", "Cannot access member on non-class type");
        }
    } else if (ctx->methodCall()) {
        // Method call - reuse method call visitor
        resultType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->methodCall()));
    }

    // Make the result type nullable since this is a nullable chain
    typeRegistry_.registerNullableType(resultType->toString());
    return std::any(resultType);
}

std::any TypeChecker::visitArrayAccessExpr(PrystParser::ArrayAccessExprContext* ctx) {
    std::cout << "Debug [visitArrayAccessExpr]: Processing array access" << std::endl;
    auto array = visit(ctx->expression(0));
    auto index = visit(ctx->expression(1));

    auto arrayType = std::any_cast<std::shared_ptr<Type>>(array);
    auto indexType = std::any_cast<std::shared_ptr<Type>>(index);

    if (arrayType->getKind() == Type::Kind::Array) {
        auto elementType = std::static_pointer_cast<ArrayType>(arrayType)->getElementType();
        if (indexType->getKind() == Type::Kind::Int) {
            return std::any(elementType);
        }
        throw Error("TypeError", "Array index must be integer");
    }

    throw Error("TypeError", "Type " + arrayType->toString() + " is not an array");
}

std::any TypeChecker::visitPrimaryExpr(PrystParser::PrimaryExprContext* ctx) {
    auto result = visit(ctx->primary());
    return result;
}

std::any TypeChecker::visitLambdaExpr(PrystParser::LambdaExprContext* ctx) {
    std::cout << "Debug [visitLambdaExpr]: Processing lambda expression" << std::endl;
    pushScope();
    std::vector<std::shared_ptr<Type>> paramTypes;

    if (ctx->lambdaParams()) {
        auto params = ctx->lambdaParams();
        for (size_t i = 0; i < params->type().size(); i++) {
            auto paramType = getTypeFromTypeContext(params->type(i));
            declareVariable(params->IDENTIFIER(i)->getText(), paramType);
            paramTypes.push_back(std::any_cast<std::shared_ptr<Type>>(paramType));
        }
    }

    std::shared_ptr<Type> returnType = VOID_TYPE;
    if (ctx->returnType()) {
        returnType = std::any_cast<std::shared_ptr<Type>>(getTypeFromReturnTypeContext(ctx->returnType()));
    }

    if (ctx->block()) {
        visit(ctx->block());
    } else if (ctx->expression()) {
        auto exprType = visit(ctx->expression());
        if (!returnType->isVoidType()) {
            checkTypesMatch(returnType, std::any_cast<std::shared_ptr<Type>>(exprType), ctx->expression());
        }
        returnType = std::any_cast<std::shared_ptr<Type>>(exprType);
    }

    popScope();

    return std::any(std::make_shared<FunctionType>(returnType, paramTypes));
}

std::any TypeChecker::visitPostfixExpr(PrystParser::PostfixExprContext* ctx) {
    std::cout << "Debug [visitPostfixExpr]: Processing postfix expression" << std::endl;
    auto expr = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression()));
    return std::any(expr);
}

std::any TypeChecker::visitConstructorExpr(PrystParser::ConstructorExprContext* ctx) {
    auto typeAny = visit(ctx->qualifiedType());  // Changed from expression() to qualifiedType()
    auto constructorType = std::any_cast<std::shared_ptr<Type>>(typeAny);

    if (auto classType = std::dynamic_pointer_cast<ClassType>(constructorType)) {
        std::vector<std::shared_ptr<Type>> argTypes;
        if (ctx->arguments()) {
            for (auto arg : ctx->arguments()->expression()) {
                auto argAny = visit(arg);
                argTypes.push_back(std::any_cast<std::shared_ptr<Type>>(argAny));
            }
        }

        // Get constructor parameters and validate
        const auto& constructorParams = typeRegistry_.getConstructorParams(classType->getName());
        if (argTypes.size() != constructorParams.size()) {
            throw Error("TypeError", "Wrong number of arguments for constructor");
        }

        for (size_t i = 0; i < argTypes.size(); i++) {
            if (!isAssignable(std::any(constructorParams[i]), std::any(argTypes[i]))) {
                throw Error("TypeError", "Constructor argument type mismatch");
            }
        }
        return std::any(classType);
    }
    throw Error("TypeError", "Cannot construct non-class type");
}

std::any TypeChecker::visitNullableMethodCallExpr(PrystParser::NullableMethodCallExprContext* ctx) {
    std::cout << "Debug [visitNullableMethodCallExpr]: Processing nullable method call" << std::endl;

    // Get the object type
    auto objType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression()));

    // Check if the type is nullable
    if (!typeRegistry_.isTypeNullable(typeRegistry_.convertTypeToLLVMType(objType))) {
        throw Error("TypeError", "Cannot use ?. operator on non-nullable type " + objType->toString());
    }

    // Get method name and process method call
    std::string methodName = ctx->IDENTIFIER()->getText();

    if (auto classType = std::dynamic_pointer_cast<ClassType>(objType)) {
        auto methodType = classType->getMethod(methodName);
        if (!methodType) {
            throw Error("TypeError", "Method '" + methodName + "' not found on type " + objType->toString());
        }

        auto functionType = std::dynamic_pointer_cast<FunctionType>(methodType);
        if (!functionType) {
            throw Error("TypeError", "Member '" + methodName + "' is not a method");
        }

        // Process arguments
        std::vector<std::shared_ptr<Type>> argTypes;
        if (ctx->arguments()) {
            for (auto arg : ctx->arguments()->expression()) {
                auto argType = std::any_cast<std::shared_ptr<Type>>(visit(arg));
                argTypes.push_back(argType);
            }
        }

        // Check argument count
        if (argTypes.size() != functionType->getParamTypes().size()) {
            throw Error("TypeError", "Wrong number of arguments for method '" + methodName + "'");
        }

        // Check argument types
        for (size_t i = 0; i < argTypes.size(); i++) {
            if (!isAssignable(std::any(functionType->getParamTypes()[i]), std::any(argTypes[i]))) {
                throw Error("TypeError", "Argument type mismatch for method '" + methodName + "'");
            }
        }

        // Make return type nullable since this is a nullable method call
        auto returnType = functionType->getReturnType();
        typeRegistry_.registerNullableType(returnType->toString());
        return std::any(std::make_shared<NullableType>(returnType));
    }

    throw Error("TypeError", "Cannot call methods on non-class type: " + objType->toString());
}

std::any TypeChecker::visitNullableType(PrystParser::NullableTypeContext* ctx) {
    std::cout << "Debug [visitNullableType]: Processing nullable type" << std::endl;

    // Get the base type
    auto baseType = std::any_cast<std::shared_ptr<Type>>(visit(ctx->type()));

    // Register this type as nullable in both type registries
    std::string typeName = baseType->toString();
    typeRegistry_.registerNullableType(typeName);
    runtimeRegistry_.registerNullableType(typeName);

    // Create and return a NullableType wrapper
    auto nullableType = std::make_shared<NullableType>(baseType);
    return std::any(nullableType);
}

std::any TypeChecker::visitMultiplicativeExpr(PrystParser::MultiplicativeExprContext* ctx) {
    auto left = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
    auto right = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(1)));

    if ((left == INT_TYPE || left == FLOAT_TYPE) &&
        (right == INT_TYPE || right == FLOAT_TYPE)) {
        return std::any(left == FLOAT_TYPE || right == FLOAT_TYPE ? FLOAT_TYPE : INT_TYPE);
    }
    throw Error("TypeError", "Invalid operand types for multiplicative operator");
}

std::any TypeChecker::visitEqualityExpr(PrystParser::EqualityExprContext* ctx) {
    auto left = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
    auto right = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(1)));

    if (isAssignable(left, right) || isAssignable(right, left)) {
        return std::any(BOOL_TYPE);
    }
    throw Error("TypeError", "Cannot compare incompatible types");
}

std::any TypeChecker::visitConditionalExpr(PrystParser::ConditionalExprContext* ctx) {
    auto condition = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(0)));
    if (condition != BOOL_TYPE) {
        throw Error("TypeError", "Condition must be boolean");
    }

    auto thenExpr = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(1)));
    auto elseExpr = std::any_cast<std::shared_ptr<Type>>(visit(ctx->expression(2)));

    if (isAssignable(thenExpr, elseExpr)) {
        return std::any(thenExpr);
    } else if (isAssignable(elseExpr, thenExpr)) {
        return std::any(elseExpr);
    }
    throw Error("TypeError", "Incompatible types in conditional expression");
}

std::any TypeChecker::visitInstanceofExpr(PrystParser::InstanceofExprContext* ctx) {
    auto expr = visit(ctx->expression());
    auto exprType = std::any_cast<std::shared_ptr<Type>>(expr);
    auto checkType = getTypeFromTypeContext(ctx->type());

    // Always returns a boolean type
    return std::any(BOOL_TYPE);
}

std::any TypeChecker::visitTypeofExpr(PrystParser::TypeofExprContext* ctx) {
    auto expr = visit(ctx->expression());
    auto exprType = std::any_cast<std::shared_ptr<Type>>(expr);
    return std::any(std::make_shared<Type>(Type::Kind::MetaType, exprType));
}

} // namespace pryst
