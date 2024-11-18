#include "runtime_registry.hpp"
#include "array_impl.hpp"
#include "llvm/IR/DerivedTypes.h"

namespace pryst {
namespace core {

// Static wrapper functions
static void* array_new(const std::string& elementType) {
    return new ArrayImpl(elementType);
}

static size_t array_length(ArrayImpl* arr) {
    return arr->length();
}

static void array_push(ArrayImpl* arr, void* element) {
    arr->push(element);
}

static void* array_pop(ArrayImpl* arr) {
    return arr->pop();
}

static void* array_shift(ArrayImpl* arr) {
    return arr->shift();
}

static void array_unshift(ArrayImpl* arr, void* element) {
    arr->unshift(element);
}

static int array_indexOf(ArrayImpl* arr, void* element) {
    return arr->indexOf(element);
}

static ArrayImpl* array_slice(ArrayImpl* arr, size_t start, size_t end) {
    return arr->slice(start, end);
}

static std::string array_join(ArrayImpl* arr, const std::string& delimiter) {
    return arr->join(delimiter);
}

static void array_delete(ArrayImpl* arr) {
    delete arr;
}

void registerArrayClass(pryst::runtime::RuntimeRegistry& registry, llvm::Module* module) {
    // Get Array struct type from module
    auto* arrayStructTy = llvm::StructType::getTypeByName(module->getContext(), "struct.pryst.core.Array");
    if (!arrayStructTy) {
        throw std::runtime_error("Array struct type not found in module");
    }

    // Register Array class
    registry.registerClass("Array", "pryst::core::Array", arrayStructTy);

    // Register constructor
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "Array",  // Using class name as constructor name
        (void*)array_new,
        {"str"},  // elementType
        "Array"
    });

    // Register length method
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "length",
        (void*)array_length,
        {},  // no parameters
        "int"
    });

    // Register push method
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "push",
        (void*)array_push,
        {"any"},  // element
        "void"
    });

    // Register pop method
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "pop",
        (void*)array_pop,
        {},  // no parameters
        "any"
    });

    // Register shift method
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "shift",
        (void*)array_shift,
        {},  // no parameters
        "any"
    });

    // Register unshift method
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "unshift",
        (void*)array_unshift,
        {"any"},  // element
        "void"
    });

    // Register indexOf method
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "indexOf",
        (void*)array_indexOf,
        {"any"},  // element
        "int"
    });

    // Register slice method
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "slice",
        (void*)array_slice,
        {"int", "int"},  // start, end
        "Array"
    });

    // Register join method
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "join",
        (void*)array_join,
        {"str"},  // delimiter
        "str"
    });

    // Register destructor
    registry.registerClassMethod("Array", pryst::runtime::ClassMethod{
        "delete",
        (void*)array_delete,
        {},  // no parameters
        "void"
    });
}

} // namespace core
} // namespace pryst
