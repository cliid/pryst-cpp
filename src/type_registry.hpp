#pragma once

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <memory>
#include <iostream>
#include "llvm/IR/Type.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/LLVMContext.h"
#include "types.hpp"
#include "error.hpp"
#include "runtime/runtime_registry.hpp"

namespace pryst {

class TypeRegistry {
public:
    // Basic constructor for temporary initialization
    explicit TypeRegistry(llvm::LLVMContext& context);
    // Full constructor with RuntimeRegistry
    TypeRegistry(llvm::LLVMContext& context, runtime::RuntimeRegistry& runtimeRegistry);
    ~TypeRegistry() = default;

    // Register a new class type with its members
    void registerClass(const std::string& className,
                      const std::vector<std::pair<std::string, llvm::Type*>>& members);
    void registerClass(const std::string& className,
                      const std::vector<std::pair<std::string, llvm::Type*>>& members,
                      const std::string& baseClass);

    // Validate error method override
    void validateErrorMethodOverride(const std::string& className,
                                   const std::string& methodName,
                                   const std::shared_ptr<FunctionType>& method,
                                   const std::string& baseClass);

    // Check if a class is an error type
    bool isErrorType(const std::string& className) const;

    // Error chain validation and creation
    void validateErrorChain(const std::string& errorClass,
                          const std::string& chainedClass);
    std::shared_ptr<Type> createErrorChainType(const std::string& errorClass,
                                             const std::string& chainedClass);

    // Register a new interface type
    void registerInterfaceType(std::shared_ptr<InterfaceType> interfaceType);

    // Register interface implementation
    void registerInterfaceImplementation(const std::string& className, const std::string& interfaceName);

    // Check if a class implements an interface
    bool implementsInterface(const std::string& className, const std::string& interfaceName) const;

    // Register inheritance relationship
    void registerInheritance(const std::string& derived, const std::string& base);

    // Check if derived class inherits from base class
    bool isSubclassOf(const std::string& derived, const std::string& base) const;

    // Get the LLVM type for a class
    llvm::StructType* getClassType(const std::string& className);

    // Get the index of a member within a class
    int getMemberIndex(const std::string& className, const std::string& memberName);

    // Register a member index for a class
    void registerMemberIndex(const std::string& className, const std::string& memberName, int index);

    // Register a constructor for a class
    void registerConstructor(const std::string& className, const std::vector<llvm::Type*>& paramTypes);

    // Check if a class has a constructor
    bool hasConstructor(const std::string& className) const;

    // Get constructor parameter types
    const std::vector<llvm::Type*>& getConstructorParams(const std::string& className);

    // Check if a class exists
    bool hasClass(const std::string& className) const;

    // Get member type by index
    llvm::Type* getMemberType(const std::string& className, int index);

    // Get member type by name
    std::shared_ptr<Type> getMemberPrystType(const std::string& className, const std::string& memberName);

    // Get function type by name
    std::shared_ptr<Type> getFunctionType(const std::string& functionName) const;

    // Convert LLVM type to Pryst Type
    std::shared_ptr<Type> convertLLVMTypeToType(llvm::Type* llvmType);

    // Convert Pryst Type to LLVM type
    llvm::Type* convertTypeToLLVMType(std::shared_ptr<Type> type);

    // Get LLVM type for a Pryst type
    llvm::Type* getLLVMType(std::shared_ptr<Type> type);

    // Check if a type is nullable
    bool isTypeNullable(llvm::Type* type) const;

    // Register a type as nullable
    void registerNullableType(const std::string& typeName);

    // Register a map type with key and value types
    std::shared_ptr<Type> registerMapType(const std::string& keyType, const std::string& valueType);

    // Register an array type
    std::shared_ptr<Type> registerArrayType(const std::string& elementType);

    // Get all members of a class
    const std::vector<std::pair<std::string, llvm::Type*>>& getClassMembers(const std::string& className) const;

    // Get the LLVM context
    llvm::LLVMContext& getContext();
    llvm::Type* getBoolType() const;

    // Cache management for Pryst types
    std::shared_ptr<Type> getCachedType(const std::string& typeName) const;
    void cacheType(const std::string& typeName, std::shared_ptr<Type> type);

    // Namespace management
    void registerNamespace(const std::string& ns);
    void registerNamespaceAlias(const std::string& alias, const std::string& target);
    bool isNamespaceRegistered(const std::string& ns) const;
    std::string resolveNamespace(const std::string& ns) const;
    std::vector<std::string> getRegisteredNamespaces() const;

    // Get all registered types
    const std::unordered_map<std::string, std::shared_ptr<Type>>& getAllTypes() const;

    // Check if a type is numeric (int or float)
    bool isNumericType(std::shared_ptr<Type> type) const;

    // Get common numeric type between two numeric types
    std::shared_ptr<Type> getCommonNumericType(std::shared_ptr<Type> type1, std::shared_ptr<Type> type2) const;

private:
    llvm::LLVMContext& context_;
    runtime::RuntimeRegistry& runtimeRegistry_;  // Reference to RuntimeRegistry
    // Map of class names to their LLVM struct types
    std::unordered_map<std::string, llvm::StructType*> classTypes;

    // Map of class names to their member information (LLVM types)
    std::unordered_map<std::string, std::vector<std::pair<std::string, llvm::Type*>>> classMemberInfo;

    // Map of class names to their member information (Pryst types)
    std::unordered_map<std::string, std::unordered_map<std::string, std::shared_ptr<Type>>> convertedMemberTypes;

    // Map of class names to their constructor parameter types
    std::unordered_map<std::string, std::vector<llvm::Type*>> constructorParams;

    // Map of class names to their base class
    std::unordered_map<std::string, std::string> inheritance;

    // Map of class names to their implemented interfaces
    std::unordered_map<std::string, std::unordered_set<std::string>> interfaceImplementations;

    // Cache for converted Pryst types
    std::unordered_map<std::string, std::shared_ptr<Type>> typeCache;

    // Map of primitive type names to their methods
    std::unordered_map<std::string, std::unordered_map<std::string, llvm::FunctionType*>> primitiveMethods;

    // Set of registered namespaces
    std::unordered_set<std::string> registeredNamespaces;

    // Map of namespace aliases to their targets
    std::unordered_map<std::string, std::string> namespaceAliases;

    // Initialize primitive type methods
    void registerPrimitiveMethods();

    // Get methods for a primitive type
    const std::unordered_map<std::string, llvm::FunctionType*>& getPrimitiveMethods(const std::string& typeName) const;

    // Set of types that can be null
    std::unordered_set<std::string> nullableTypes;
};

} // namespace pryst
