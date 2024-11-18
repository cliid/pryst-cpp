#pragma once

#include "antlr4-runtime.h"
#include "PrystParserBaseVisitor.h"
#include "PrystParser.h"
#include "types.hpp"
#include "llvm_type_converter.hpp"
#include "error.hpp"
#include <llvm/IR/LLVMContext.h>
#include "type_registry.hpp"
#include "runtime/runtime_registry.hpp"
#include "runtime/web_types.hpp"
#include <memory>
#include <string>
#include <vector>
#include <unordered_map>

namespace pryst {

class TypeChecker : public PrystParserBaseVisitor {
private:
    std::vector<std::unordered_map<std::string, std::shared_ptr<Type>>> scopes;
    std::shared_ptr<Type> currentFunctionReturnType;
    std::shared_ptr<Type> lastExpressionType;  // Track the type of the last visited expression
    bool isInLoop;
    llvm::LLVMContext& context_;
    TypeRegistry& typeRegistry_;
    pryst::runtime::RuntimeRegistry& runtimeRegistry_;
    LLVMTypeConverter converter_;

    void pushScope();
    void popScope();
    void initializeGlobalScope();
    void declareVariable(const std::string& name, std::shared_ptr<Type> type);
    std::shared_ptr<Type> lookupVariable(const std::string& name);
    std::shared_ptr<Type> checkMemberAccess(std::shared_ptr<Type> baseType, const std::string& member, bool isNullable);
    std::shared_ptr<Type> getTypeFromTypeContext(PrystParser::TypeContext* ctx);
    std::shared_ptr<Type> getTypeFromReturnTypeContext(PrystParser::ReturnTypeContext* ctx);
    std::shared_ptr<Type> checkBinaryOp(const std::string& op, std::shared_ptr<Type> left, std::shared_ptr<Type> right);
    std::shared_ptr<Type> checkUnaryOp(const std::string& op, std::shared_ptr<Type> operand);
    std::shared_ptr<Type> checkTypeCast(std::shared_ptr<Type> targetType, std::shared_ptr<Type> sourceType);
    std::shared_ptr<Type> checkArrayAccess(std::shared_ptr<Type> arrayType, std::shared_ptr<Type> indexType);
    std::shared_ptr<Type> checkTypesMatch(std::shared_ptr<Type> expectedType, std::shared_ptr<Type> actualType, antlr4::ParserRuleContext* ctx);
    bool isAssignable(std::shared_ptr<Type> targetType, std::shared_ptr<Type> sourceType);
    std::shared_ptr<Type> inferReturnType(PrystParser::BlockContext* ctx);
    std::shared_ptr<Type> getLambdaType(PrystParser::LambdaExprContext* ctx);

public:
    TypeChecker(llvm::LLVMContext& context, TypeRegistry& typeRegistry, pryst::runtime::RuntimeRegistry& runtimeRegistry)
        : currentFunctionReturnType(nullptr)
        , lastExpressionType(nullptr)
        , isInLoop(false)
        , context_(context)
        , typeRegistry_(typeRegistry)
        , runtimeRegistry_(runtimeRegistry)
        , converter_(context) {
        pushScope(); // Global scope

        // Register core namespaces first, before any type registration
        if (!typeRegistry_.isNamespaceRegistered("pryst")) {
            typeRegistry_.registerNamespace("pryst");
        }
        if (!typeRegistry_.isNamespaceRegistered("pryst::web")) {
            typeRegistry_.registerNamespace("pryst::web");
        }

        // Initialize global scope with all registered types
        initializeGlobalScope();
    }

    virtual ~TypeChecker() override {
        while (!scopes.empty()) {
            popScope();
        }
    }

    // Visit methods for declarations
    std::any visitProgram(PrystParser::ProgramContext* ctx) override;
    std::any visitFunctionDecl(PrystParser::FunctionDeclContext* ctx) override;
    std::any visitVarDecl(PrystParser::VarDeclContext* ctx) override;
    std::any visitClassDecl(PrystParser::ClassDeclContext* ctx) override;
    std::any visitInterfaceDecl(PrystParser::InterfaceDeclContext* ctx) override;

    // Visit methods for statements
    std::any visitBlock(PrystParser::BlockContext* ctx) override;
    std::any visitIfStmt(PrystParser::IfStmtContext* ctx) override;
    std::any visitWhileStmt(PrystParser::WhileStmtContext* ctx) override;
    std::any visitForStmt(PrystParser::ForStmtContext* ctx) override;
    std::any visitReturnStmt(PrystParser::ReturnStmtContext* ctx) override;
    std::any visitBreakStmt(PrystParser::BreakStmtContext* ctx) override;
    std::any visitContinueStmt(PrystParser::ContinueStmtContext* ctx) override;
    std::any visitTryStmt(PrystParser::TryStmtContext* ctx) override;

    // Visit methods for expressions
    std::any visitPrimaryExpr(PrystParser::PrimaryExprContext* ctx) override;
    std::any visitParenExpr(PrystParser::ParenExprContext* ctx) override;
    std::any visitPrefixExpr(PrystParser::PrefixExprContext* ctx) override;
    std::any visitPostfixExpr(PrystParser::PostfixExprContext* ctx) override;
    std::any visitMethodCallExpr(PrystParser::MethodCallExprContext* ctx) override;
    std::any visitNullableMethodCallExpr(PrystParser::NullableMethodCallExprContext* ctx) override;
    std::any visitArrayAccessExpr(PrystParser::ArrayAccessExprContext* ctx) override;
    std::any visitMemberAccessExpr(PrystParser::MemberAccessExprContext* ctx) override;
    std::any visitNullableChain(PrystParser::NullableChainContext* ctx) override;
    std::any visitAdditiveExpr(PrystParser::AdditiveExprContext* ctx) override;
    std::any visitMultiplicativeExpr(PrystParser::MultiplicativeExprContext* ctx) override;
    std::any visitRelationalExpr(PrystParser::RelationalExprContext* ctx) override;
    std::any visitEqualityExpr(PrystParser::EqualityExprContext* ctx) override;
    std::any visitLogicalAndExpr(PrystParser::LogicalAndExprContext* ctx) override;
    std::any visitLogicalOrExpr(PrystParser::LogicalOrExprContext* ctx) override;
    std::any visitConditionalExpr(PrystParser::ConditionalExprContext* ctx) override;
    std::any visitAssignmentExpr(PrystParser::AssignmentExprContext* ctx) override;
    std::any visitCastExpr(PrystParser::CastExprContext* ctx) override;
    std::any visitLambdaExpr(PrystParser::LambdaExprContext* ctx) override;

    // Visit methods for literals and types
    std::any visitType(PrystParser::TypeContext* ctx) override;
    std::any visitBasicType(PrystParser::BasicTypeContext* ctx) override;
    std::any visitQualifiedType(PrystParser::QualifiedTypeContext* ctx) override;
    std::any visitArrayType(PrystParser::ArrayTypeContext* ctx) override;
    std::any visitMapType(PrystParser::MapTypeContext* ctx) override;
    std::any visitFunctionType(PrystParser::FunctionTypeContext* ctx) override;
    std::any visitEmptyArrayLiteral(PrystParser::EmptyArrayLiteralContext* ctx) override;
    std::any visitNonEmptyArrayLiteral(PrystParser::NonEmptyArrayLiteralContext* ctx) override;
    std::any visitEmptyMapLiteral(PrystParser::EmptyMapLiteralContext* ctx) override;
    std::any visitNonEmptyMapLiteral(PrystParser::NonEmptyMapLiteralContext* ctx) override;
    std::any visitMapEntry(PrystParser::MapEntryContext* ctx) override;
    std::any visitMapKey(PrystParser::MapKeyContext* ctx) override;
    std::any visitLambdaParams(PrystParser::LambdaParamsContext* ctx) override;
    std::any visitChainedCall(PrystParser::ChainedCallContext* ctx) override;
    std::any visitStringLiteral(PrystParser::StringLiteralContext* ctx) override;

    // Additional visitor methods for nullable types and type system
    std::any visitNullableType(PrystParser::NullableTypeContext* ctx) override;
    std::any visitKeyType(PrystParser::KeyTypeContext* ctx) override;
    std::any visitPrimary(PrystParser::PrimaryContext* ctx) override;
    std::any visitStringInterpolation(PrystParser::StringInterpolationContext* ctx) override;
    std::any visitIdentifierList(PrystParser::IdentifierListContext* ctx) override;

    // Additional visitor methods
    std::any visitImportPath(PrystParser::ImportPathContext* ctx) override;
    std::any visitDeclaration(PrystParser::DeclarationContext* ctx) override;
    std::any visitParameters(PrystParser::ParametersContext* ctx) override;
    std::any visitParameter(PrystParser::ParameterContext* ctx) override;
    std::any visitAssignment(PrystParser::AssignmentContext* ctx) override;
    std::any visitExpressionStmt(PrystParser::ExpressionStmtContext* ctx) override;
    std::any visitArguments(PrystParser::ArgumentsContext* ctx) override;
    std::any visitConstructorExpr(PrystParser::ConstructorExprContext* ctx) override;
    std::any visitFunctionCallExpr(PrystParser::FunctionCallExprContext* ctx) override;
    std::any visitStatement(PrystParser::StatementContext* ctx) override;
    std::any visitImportDecl(PrystParser::ImportDeclContext* ctx) override;
    std::any visitNonNullAssertExpr(PrystParser::NonNullAssertExprContext* ctx) override;
    std::any visitGenericParams(PrystParser::GenericParamsContext* ctx) override;
    std::any visitGenericArgs(PrystParser::GenericArgsContext* ctx) override;
    std::any visitInterfaceMember(PrystParser::InterfaceMemberContext* ctx) override;
    std::any visitClassMember(PrystParser::ClassMemberContext* ctx) override;
    std::any visitOverloadParams(PrystParser::OverloadParamsContext* ctx) override;
    std::any visitConstructorDecl(PrystParser::ConstructorDeclContext* ctx) override;
    std::any visitConstructorBlock(PrystParser::ConstructorBlockContext* ctx) override;
    std::any visitTypeList(PrystParser::TypeListContext* ctx) override;
};
} // namespace pryst
