#include "runtime_registry.hpp"
#include "../type_registry.hpp"
#include "io.hpp"
#include "web.hpp"
#include "web_types.hpp"
#include "web_impl.hpp"
#include "io_impl.hpp"
#include "map_impl.hpp"
#include "string_impl.hpp"
#include "array_impl.hpp"
#include "../error.hpp"
#include <iostream>

namespace pryst {
namespace runtime {

RuntimeRegistry::RuntimeRegistry(llvm::Module* mod)
    : module(mod), typeRegistry(nullptr) {}

void RuntimeRegistry::setTypeRegistry(TypeRegistry* registry) {
    typeRegistry = registry;
}

void RuntimeRegistry::registerFunction(const std::string& name, void* func) {
    functions[name] = func;
}

void* RuntimeRegistry::getFunction(const std::string& name) {
    auto it = functions.find(name);
    return it != functions.end() ? it->second : nullptr;
}

void RuntimeRegistry::registerType(const std::string& name, const std::string& fullName) {
    ClassType classType;
    classType.name = name;
    classType.fullName = fullName;
    classType.llvmType = nullptr;
    classes[name] = classType;
    if (name != fullName) {
        classes[fullName] = classType;
    }
}

void RuntimeRegistry::registerClass(const std::string& name, const std::string& fullName, llvm::StructType* type) {
    ClassType classType;
    classType.name = name;
    classType.fullName = fullName;
    classType.llvmType = type;
    classes[name] = classType;
    if (name != fullName) {
        classes[fullName] = classType;
    }
}

void RuntimeRegistry::registerClassMethod(const std::string& className, const ClassMethod& method) {
    auto it = classes.find(className);
    if (it != classes.end()) {
        it->second.methods.push_back(method);
        // If this class exists under multiple names, update all instances
        std::string otherName = (it->first == it->second.name) ? it->second.fullName : it->second.name;
        auto otherIt = classes.find(otherName);
        if (otherIt != classes.end()) {
            otherIt->second.methods.push_back(method);
        }
    }
}

const ClassType* RuntimeRegistry::getClass(const std::string& name) const {
    // Try exact match first
    auto it = classes.find(name);
    if (it != classes.end()) {
        return &it->second;
    }

    // If not found and name contains ::, try short name
    size_t lastSeparator = name.rfind("::");
    if (lastSeparator != std::string::npos) {
        std::string shortName = name.substr(lastSeparator + 2);
        it = classes.find(shortName);
        if (it != classes.end()) {
            return &it->second;
        }
    }

    return nullptr;
}

bool RuntimeRegistry::hasClass(const std::string& name) const {
    return getClass(name) != nullptr;
}

void RuntimeRegistry::registerBuiltins() {
    if (!typeRegistry) {
        std::cerr << "Error: TypeRegistry is not set." << std::endl;
        return;
    }

    // Register core namespaces first
    typeRegistry->registerNamespace("pryst");
    typeRegistry->registerNamespace("pryst::web");

    // Remove web types registration from here since it's called in Compiler constructor
    std::cout << "Debug [registerBuiltins]: Registering core types" << std::endl;

    auto& context = module->getContext();

    // Register File class and its methods
    std::vector<llvm::Type*> fileFields;
    fileFields.push_back(llvm::Type::getInt8PtrTy(context));  // path
    fileFields.push_back(llvm::Type::getInt8PtrTy(context));  // file handle
    auto fileStructTy = llvm::StructType::create(context, fileFields, "struct.pryst.io.File");

    registerClass("File", "pryst::io::File", fileStructTy);

    // Register File methods
    registerClassMethod("File", ClassMethod(
        "new",
        (void*)pryst_io_File_new,
        {"str", "str"},
        "File"
    ));

    registerClassMethod("File", ClassMethod(
        "readString",
        (void*)pryst_io_File_readString,
        {},
        "str?"
    ));

    registerClassMethod("File", ClassMethod(
        "writeString",
        (void*)pryst_io_File_writeString,
        {"str"},
        "bool"
    ));

    registerClassMethod("File", ClassMethod(
        "close",
        (void*)pryst_io_File_close,
        {},
        "void"
    ));

    // Register IO class and its static methods
    std::vector<llvm::Type*> ioFields;  // Empty as all methods are static
    auto ioStructTy = llvm::StructType::create(context, ioFields, "struct.pryst.io.IO");

    registerClass("IO", "pryst::io::IO", ioStructTy);

    // Register IO static methods
    registerClassMethod("IO", ClassMethod(
        "print",
        (void*)pryst_io_print_impl,
        {"str"},
        "void"
    ));

    registerClassMethod("IO", ClassMethod(
        "println",
        (void*)pryst_io_println_impl,
        {"str"},
        "void"
    ));

    registerClassMethod("IO", ClassMethod(
        "readLine",
        (void*)pryst_io_readLine_impl,
        {},
        "str"
    ));

    registerClassMethod("IO", ClassMethod(
        "getChar",
        (void*)pryst_io_getChar_impl,
        {},
        "char"
    ));

    // Register Map class and its methods
    std::vector<llvm::Type*> mapFields;
    mapFields.push_back(llvm::Type::getInt8PtrTy(context));  // keyType
    mapFields.push_back(llvm::Type::getInt8PtrTy(context));  // valueType
    mapFields.push_back(llvm::Type::getInt8PtrTy(context));  // internal map pointer
    auto mapStructTy = llvm::StructType::create(context, mapFields, "struct.pryst.core.Map");

    registerClass("Map", "pryst::core::Map", mapStructTy);

    // Register Map methods
    registerClassMethod("Map", ClassMethod(
        "new",
        (void*)pryst_core_Map_new,
        {"str", "str"},
        "Map"
    ));

    registerClassMethod("Map", ClassMethod(
        "get",
        (void*)pryst_core_Map_get,
        {"str"},
        "any"
    ));

    registerClassMethod("Map", ClassMethod(
        "set",
        (void*)pryst_core_Map_set,
        {"str", "any"},
        "void"
    ));

    registerClassMethod("Map", ClassMethod(
        "has",
        (void*)pryst_core_Map_has,
        {"str"},
        "bool"
    ));

    registerClassMethod("Map", ClassMethod(
        "delete",
        (void*)pryst_core_Map_delete,
        {"str"},
        "void"
    ));

    registerClassMethod("Map", ClassMethod(
        "clear",
        (void*)pryst_core_Map_clear,
        {},
        "void"
    ));

    registerClassMethod("Map", ClassMethod(
        "keys",
        (void*)pryst_core_Map_keys,
        {},
        "str[]"
    ));

    registerClassMethod("Map", ClassMethod(
        "values",
        (void*)pryst_core_Map_values,
        {},
        "any[]"
    ));

    registerClassMethod("Map", ClassMethod(
        "size",
        (void*)pryst_core_Map_size,
        {},
        "int"
    ));
}

void RuntimeRegistry::registerWebTypes() {
    if (!typeRegistry) {
        std::cerr << "Error: TypeRegistry is not set." << std::endl;
        return;
    }

    auto& context = module->getContext();

    // Register Request class
    std::vector<llvm::Type*> requestFields;
    requestFields.push_back(llvm::Type::getInt8PtrTy(context));  // method
    requestFields.push_back(llvm::Type::getInt8PtrTy(context));  // path
    // Use the proper map struct type for headers
    auto mapStructTy = llvm::StructType::getTypeByName(context, "struct.pryst.core.Map");
    if (!mapStructTy) {
        std::vector<llvm::Type*> mapFields;
        mapFields.push_back(llvm::Type::getInt8PtrTy(context));  // keyType
        mapFields.push_back(llvm::Type::getInt8PtrTy(context));  // valueType
        mapFields.push_back(llvm::Type::getInt8PtrTy(context));  // internal map pointer
        mapStructTy = llvm::StructType::create(context, mapFields, "struct.pryst.core.Map");
    }
    requestFields.push_back(mapStructTy);  // headers (map)
    auto requestStructTy = llvm::StructType::create(context, requestFields, "struct.pryst.web.Request");

    registerClass("Request", "pryst::web::Request", requestStructTy);

    // Register Request methods
    registerClassMethod("Request", ClassMethod(
        "new",
        (void*)pryst_web_Request_new,
        {"str", "str"},
        "Request"
    ));

    // Register Response class
    std::vector<llvm::Type*> responseFields;
    responseFields.push_back(llvm::Type::getInt32Ty(context));   // status
    responseFields.push_back(llvm::Type::getInt8PtrTy(context)); // body
    responseFields.push_back(mapStructTy); // headers (map)
    auto responseStructTy = llvm::StructType::create(context, responseFields, "struct.pryst.web.Response");

    registerClass("Response", "pryst::web::Response", responseStructTy);

    // Register Response methods
    registerClassMethod("Response", ClassMethod(
        "new",
        (void*)pryst_web_Response_new,
        {"int", "str"},
        "Response"
    ));

    // Register WebServer class
    std::vector<llvm::Type*> serverFields;
    serverFields.push_back(llvm::Type::getInt8PtrTy(context));  // host
    serverFields.push_back(llvm::Type::getInt32Ty(context));    // port
    auto serverStructTy = llvm::StructType::create(context, serverFields, "struct.pryst.web.WebServer");

    registerClass("WebServer", "pryst::web::WebServer", serverStructTy);

    // Register WebServer methods
    registerClassMethod("WebServer", ClassMethod(
        "new",
        (void*)pryst_web_WebServer_new,
        {"str", "int"},
        "WebServer"
    ));

    registerClassMethod("WebServer", ClassMethod(
        "start",
        (void*)pryst_web_WebServer_start,
        {},
        "void"
    ));
}

} // namespace runtime
} // namespace pryst
