#include "runtime_registry.hpp"
#include "error_impl.hpp"
#include "llvm/IR/DerivedTypes.h"

namespace pryst {
namespace core {

// Static wrapper functions
static void* error_new(const std::string& message, int code) {
    return new ErrorImpl(message, code);
}

static std::string error_getMessage(ErrorImpl* err) {
    return err->getMessage();
}

static int error_getCode(ErrorImpl* err) {
    return err->getCode();
}

static std::string error_toString(ErrorImpl* err) {
    return err->toString();
}

static void error_delete(ErrorImpl* err) {
    delete err;
}

void registerErrorClass(pryst::runtime::RuntimeRegistry& registry, llvm::Module* module) {
    // Get Error struct type from module
    auto* errorStructTy = llvm::StructType::getTypeByName(module->getContext(), "struct.pryst.core.Error");
    if (!errorStructTy) {
        throw std::runtime_error("Error struct type not found in module");
    }

    // Register Error class
    registry.registerClass("Error", "pryst::core::Error", errorStructTy);

    // Register constructor
    registry.registerClassMethod("Error", pryst::runtime::ClassMethod{
        "Error",  // Using class name as constructor name
        (void*)error_new,
        {"str", "int"},  // message, code (with default)
        "Error"
    });

    // Register getMessage method
    registry.registerClassMethod("Error", pryst::runtime::ClassMethod{
        "getMessage",
        (void*)error_getMessage,
        {},  // no parameters
        "str"
    });

    // Register getCode method
    registry.registerClassMethod("Error", pryst::runtime::ClassMethod{
        "getCode",
        (void*)error_getCode,
        {},  // no parameters
        "int"
    });

    // Register toString method
    registry.registerClassMethod("Error", pryst::runtime::ClassMethod{
        "toString",
        (void*)error_toString,
        {},  // no parameters
        "str"
    });

    // Register destructor
    registry.registerClassMethod("Error", pryst::runtime::ClassMethod{
        "delete",
        (void*)error_delete,
        {},  // no parameters
        "void"
    });
}

} // namespace core
} // namespace pryst
