#include <string>
#include <memory>
#include <cstring>
#include "runtime.hpp"
#include "type_registry.hpp"

extern "C" {

bool pryst_runtime_instanceof(void* obj, const char* type_name) {
    if (!obj) return false;

    // Get runtime type info from object
    auto* rtInfo = static_cast<pryst::RuntimeTypeInfo*>(obj);

    // Handle nullable types
    bool isNullable = strstr(type_name, "?") != nullptr;
    std::string baseTypeName = isNullable ? std::string(type_name, strlen(type_name) - 1) : type_name;

    // Check if type matches directly or is a superclass
    const char* objType = rtInfo->type_name;
    bool isObjNullable = strstr(objType, "?") != nullptr;
    std::string baseObjType = isObjNullable ? std::string(objType, strlen(objType) - 1) : objType;

    while (baseObjType.c_str()) {
        if (baseObjType == baseTypeName && (!isNullable || isObjNullable)) {
            return true;
        }
        // Get parent type from type registry
        const char* parentType = pryst::RuntimeRegistry::getInstance().getSuperclass(baseObjType.c_str());
        if (!parentType) break;
        baseObjType = parentType;
    }
    return false;
}

const char* pryst_runtime_typeof(void* obj) {
    if (!obj) return "null";

    // Get runtime type info from object
    auto* rtInfo = static_cast<pryst::RuntimeTypeInfo*>(obj);
    return rtInfo->type_name; // Type name already includes nullable marker if applicable
}

} // extern "C"
