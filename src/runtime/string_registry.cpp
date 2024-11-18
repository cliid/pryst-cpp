#include "runtime_registry.hpp"
#include "string_impl.hpp"
#include "llvm/IR/DerivedTypes.h"

namespace pryst {
namespace core {

void registerStringClass(pryst::runtime::RuntimeRegistry& registry, llvm::Module* module) {
    // Get String struct type from module
    auto stringStructTy = llvm::StructType::getTypeByName(module->getContext(), "struct.pryst.core.String");
    if (!stringStructTy) {
        throw std::runtime_error("String struct type not found in module");
    }

    // Register String class
    registry.registerClass("String", "pryst::core::String", stringStructTy);

    // Register constructor
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "String",  // Using class name as constructor name
        (void*)pryst_core_String_new,
        {"str"},  // value
        "String"
    });

    // Register length method
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "length",
        (void*)pryst_core_String_length,
        {},  // no parameters
        "int"
    });

    // Register substring method
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "substring",
        (void*)pryst_core_String_substring,
        {"int", "int"},  // start, length
        "String"
    });

    // Register indexOf method
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "indexOf",
        (void*)pryst_core_String_indexOf,
        {"str"},  // search string
        "int"
    });

    // Register lastIndexOf method
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "lastIndexOf",
        (void*)pryst_core_String_lastIndexOf,
        {"str"},  // search string
        "int"
    });

    // Register replace method
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "replace",
        (void*)pryst_core_String_replace,
        {"str", "str"},  // from, to
        "String"
    });

    // Register split method
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "split",
        (void*)pryst_core_String_split,
        {"str"},  // delimiter
        "str[]"  // returns array of strings
    });

    // Register trim method
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "trim",
        (void*)pryst_core_String_trim,
        {},  // no parameters
        "String"
    });

    // Register toString method
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "toString",
        (void*)pryst_core_String_toString,
        {},  // no parameters
        "str"
    });

    // Register destructor
    registry.registerClassMethod("String", pryst::runtime::ClassMethod{
        "delete",
        (void*)pryst_core_String_delete,
        {},  // no parameters
        "void"
    });
}

} // namespace core
} // namespace pryst
