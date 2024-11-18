#pragma once

#include <memory>
#include <string>
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/Target/TargetMachine.h"
#include "type_registry.hpp"
#include "type_checker.hpp"
#include "llvm_codegen.hpp"
#include "runtime/runtime_registry.hpp"

namespace pryst {

class Compiler {
public:
    Compiler();
    ~Compiler();

    // Get LLVM components
    llvm::LLVMContext& getContext() { return *Context; }
    llvm::Module& getModule() { return *Module; }
    llvm::IRBuilder<>& getBuilder() { return *Builder; }
    TypeRegistry& getRegistry() { return *Registry; }
    pryst::runtime::RuntimeRegistry& getRuntimeRegistry() { return *runtimeRegistry; }

    // Compile AST
    bool compile(antlr4::tree::ParseTree* tree);

    // Compile the current module to an object file
    bool compileToObjectFile(const std::string& filename);

    // Run optimization passes
    void optimize();

private:
    // Initialize target for current machine
    void initializeTarget();

    std::unique_ptr<llvm::LLVMContext> Context;
    std::unique_ptr<llvm::Module> Module;
    std::unique_ptr<llvm::IRBuilder<>> Builder;
    std::unique_ptr<llvm::TargetMachine> Target;
    std::unique_ptr<TypeRegistry> Registry;
    std::unique_ptr<TypeChecker> typeChecker;  // Changed from TypeChecker to typeChecker
    std::unique_ptr<LLVMCodeGen> codeGen;      // Changed from CodeGen to codeGen
    std::unique_ptr<pryst::runtime::RuntimeRegistry> runtimeRegistry;
};

} // namespace pryst
