#include "runtime_registry.hpp"
#include "array_impl.hpp"
#include "llvm/IR/DerivedTypes.h"

// Forward declarations of array functions
extern "C" {
    void* pryst_core_Array_new(const char* elementType);
    size_t pryst_core_Array_length(void* array);
    void pryst_core_Array_push(void* array, void* element);
    void* pryst_core_Array_pop(void* array);
    void* pryst_core_Array_shift(void* array);
    void pryst_core_Array_unshift(void* array, void* element);
    int pryst_core_Array_indexOf(void* array, void* element);
    void* pryst_core_Array_slice(void* array, int start, int end);
    char* pryst_core_Array_join(void* array, const char* delimiter);
    void pryst_core_Array_delete(void* array);
}

namespace pryst {
namespace core {

void registerArrayClass(pryst::runtime::RuntimeRegistry& registry, llvm::Module* module) {
    // Get Array struct type from module
    auto arrayStructTy = llvm::StructType::getTypeByName(module->getContext(), "struct.pryst.core.Array");
    if (!arrayStructTy) {
        throw std::runtime_error("Array struct type not found in module");
    }

    // Register Array class
    registry.registerClass("Array", "pryst::core::Array", arrayStructTy);

    // Register constructor
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("Array", (void*)pryst_core_Array_new, {"str"}, "Array"));

    // Register length method
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("length", (void*)pryst_core_Array_length, {}, "int"));

    // Register push method
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("push", (void*)pryst_core_Array_push, {"any"}, "void"));

    // Register pop method
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("pop", (void*)pryst_core_Array_pop, {}, "any"));

    // Register shift method
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("shift", (void*)pryst_core_Array_shift, {}, "any"));

    // Register unshift method
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("unshift", (void*)pryst_core_Array_unshift, {"any"}, "void"));

    // Register indexOf method
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("indexOf", (void*)pryst_core_Array_indexOf, {"any"}, "int"));

    // Register slice method
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("slice", (void*)pryst_core_Array_slice, {"int", "int"}, "Array"));

    // Register join method
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("join", (void*)pryst_core_Array_join, {"str"}, "str"));

    // Register destructor
    registry.registerClassMethod("Array",
        pryst::runtime::ClassMethod("delete", (void*)pryst_core_Array_delete, {}, "void"));
}

} // namespace core
} // namespace pryst
