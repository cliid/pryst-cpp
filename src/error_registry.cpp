#include "runtime_registry.hpp"
#include "error_impl.hpp"
#include "llvm/IR/DerivedTypes.h"

// Forward declarations of error functions
extern "C" {
    void* pryst_core_Error_new(const char* message, int code);
    const char* pryst_core_Error_getMessage(void* error);
    int pryst_core_Error_getCode(void* error);
    char* pryst_core_Error_toString(void* error);
    void pryst_core_Error_delete(void* error);
}

namespace pryst {
namespace core {

void registerErrorClass(pryst::runtime::RuntimeRegistry& registry, llvm::Module* module) {
    // Get Error struct type from module
    auto errorStructTy = llvm::StructType::getTypeByName(module->getContext(), "struct.pryst.core.Error");
    if (!errorStructTy) {
        throw std::runtime_error("Error struct type not found in module");
    }

    // Register Error class
    registry.registerClass("Error", "pryst::core::Error", errorStructTy);

    // Register constructor
    registry.registerClassMethod("Error",
        pryst::runtime::ClassMethod("Error", (void*)pryst_core_Error_new, {"str", "int"}, "Error"));

    // Register getMessage method
    registry.registerClassMethod("Error",
        pryst::runtime::ClassMethod("getMessage", (void*)pryst_core_Error_getMessage, {}, "str"));

    // Register getCode method
    registry.registerClassMethod("Error",
        pryst::runtime::ClassMethod("getCode", (void*)pryst_core_Error_getCode, {}, "int"));

    // Register toString method
    registry.registerClassMethod("Error",
        pryst::runtime::ClassMethod("toString", (void*)pryst_core_Error_toString, {}, "str"));

    // Register destructor
    registry.registerClassMethod("Error",
        pryst::runtime::ClassMethod("delete", (void*)pryst_core_Error_delete, {}, "void"));
}

} // namespace core
} // namespace pryst
