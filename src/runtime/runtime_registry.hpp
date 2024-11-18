#pragma once

#include <string>
#include <unordered_map>
#include <functional>
#include <vector>
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"

namespace pryst {
class TypeRegistry;  // Forward declaration

namespace runtime {

struct ClassMethod {
    std::string name;
    void* func;
    std::vector<std::string> paramTypes;
    std::string returnType;

    ClassMethod(const std::string& n, void* f, const std::vector<std::string>& params, const std::string& ret)
        : name(n), func(f), paramTypes(params), returnType(ret) {}
};

struct ClassType {
    std::string name;
    std::string fullName;
    llvm::StructType* llvmType;
    std::vector<ClassMethod> methods;

    ClassType() : llvmType(nullptr) {}
    ClassType(const std::string& fullName)
        : name(fullName.substr(fullName.find_last_of(':') + 1)),
          fullName(fullName),
          llvmType(nullptr) {}
    ClassType(const std::string& name, const std::string& fullName)
        : name(name),
          fullName(fullName),
          llvmType(nullptr) {}
};

class RuntimeRegistry {
private:
    std::unordered_map<std::string, void*> functions;
    std::unordered_map<std::string, ClassType> classes;
    llvm::Module* module;
    TypeRegistry* typeRegistry;  // Change to pointer to allow nullptr initially

public:
    RuntimeRegistry(llvm::Module* mod);  // Constructor without TypeRegistry
    void setTypeRegistry(TypeRegistry* registry);  // Method to set TypeRegistry later

    void registerFunction(const std::string& name, void* func);
    void* getFunction(const std::string& name);
    void registerType(const std::string& name, const std::string& fullName);

    void registerClass(const std::string& name, const std::string& fullName, llvm::StructType* type);
    void registerClassMethod(const std::string& className, const ClassMethod& method);
    const ClassType* getClass(const std::string& name) const;
    bool hasClass(const std::string& name) const;
    llvm::Module* getModule() const { return module; }
    TypeRegistry* getTypeRegistry() const { return typeRegistry; }  // Change to pointer return type

    // Register all runtime functions and types
    void registerBuiltins();
    void registerWebTypes();  // Add web type registration method
};

} // namespace runtime
} // namespace pryst
