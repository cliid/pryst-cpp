#pragma once

// LLVM forward declarations
namespace llvm {
    class LLVMContext;
    class Module;
    class TargetMachine;
}

#include <memory>
#include <string>
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
    ::llvm::LLVMContext& getContext() { return *Context; }
    ::llvm::Module& getModule() { return *Module; }
    ::llvm::IRBuilder<::llvm::ConstantFolder, ::llvm::IRBuilderDefaultInserter>& getBuilder() { return *Builder; }
    TypeRegistry& getRegistry() { return *Registry; }
    TypeChecker& getTypeChecker() { return *typeChecker; }
    runtime::RuntimeRegistry& getRuntimeRegistry() { return *runtimeRegistry; }

    // Test helper method to inject test type checker
    void setTypeChecker(std::unique_ptr<TypeChecker> checker) {
        typeChecker = std::move(checker);
    }

    // Compile AST
    bool compile(antlr4::tree::ParseTree* tree);

    // Compile the current module to an object file
    bool compileToObjectFile(const std::string& filename);

    // Run optimization passes
    void optimize();

private:
    // Initialize target for current machine
    void initializeTarget();

    std::unique_ptr<::llvm::LLVMContext> Context;
    std::unique_ptr<::llvm::Module> Module;
    std::unique_ptr<::llvm::IRBuilder<::llvm::ConstantFolder, ::llvm::IRBuilderDefaultInserter>> Builder;
    std::unique_ptr<::llvm::TargetMachine> Target;
    std::unique_ptr<TypeRegistry> Registry;
    std::unique_ptr<TypeChecker> typeChecker;  // Changed from TypeChecker to typeChecker
    std::unique_ptr<LLVMCodeGen> codeGen;      // Changed from CodeGen to codeGen
    std::unique_ptr<runtime::RuntimeRegistry> runtimeRegistry;
};

} // namespace pryst
