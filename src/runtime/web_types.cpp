#include "web_types.hpp"
#include "runtime_registry.hpp"
#include "../type_registry.hpp"
#include "web.hpp"

namespace pryst {
namespace runtime {
namespace web {

extern "C" void* webserver_constructor() {
    return new pryst::web::WebServer();
}

// Static wrapper functions for Request methods
extern "C" void* request_constructor(const char* method, const char* path, const char* headers, const char* body) {
    return new pryst::web::Request(method, path, std::map<std::string, std::string>(), body);
}

extern "C" const char* request_get_method(void* request) {
    static std::string result;  // Static to ensure the c_str() remains valid
    result = static_cast<pryst::web::Request*>(request)->getMethod();
    return result.c_str();
}

extern "C" const char* request_get_path(void* request) {
    static std::string result;
    result = static_cast<pryst::web::Request*>(request)->getPath();
    return result.c_str();
}

extern "C" const char* request_get_headers(void* request) {
    static std::string result;
    result = static_cast<pryst::web::Request*>(request)->getHeaders();
    return result.c_str();
}

extern "C" const char* request_get_body(void* request) {
    static std::string result;
    result = static_cast<pryst::web::Request*>(request)->getBody();
    return result.c_str();
}

extern "C" void* response_constructor() {
    return new pryst::web::Response();
}

extern "C" void response_set_status(void* response, int status) {
    static_cast<pryst::web::Response*>(response)->status = status;
}

extern "C" void response_set_body(void* response, const char* body) {
    static_cast<pryst::web::Response*>(response)->body = body;
}

extern "C" void response_set_content_type(void* response, const char* contentType) {
    static_cast<pryst::web::Response*>(response)->contentType = contentType;
    static_cast<pryst::web::Response*>(response)->headers["Content-Type"] = contentType;
}

extern "C" void response_set_content(void* response, const char* content, const char* contentType) {
    auto resp = static_cast<pryst::web::Response*>(response);
    resp->body = content;
    resp->contentType = contentType;
    resp->headers["Content-Type"] = contentType;
}

extern "C" void webserver_get(void* server, const char* path, void* handler) {
    static_cast<pryst::web::WebServer*>(server)->get(path, *static_cast<std::function<void(pryst::web::Request&, pryst::web::Response&)>*>(handler));
}

extern "C" void webserver_start(void* server, int port) {
    static_cast<pryst::web::WebServer*>(server)->start(port);
}

void registerWebTypes(RuntimeRegistry& registry) {
    std::cout << "Debug [registerWebTypes]: Starting web types registration" << std::endl;
    auto& context = registry.getModule()->getContext();
    auto* typeRegistry = registry.getTypeRegistry();

    // Step 1: Register namespaces first
    std::cout << "Debug [registerWebTypes]: Registering namespaces" << std::endl;
    if (!typeRegistry->isNamespaceRegistered("pryst")) {
        typeRegistry->registerNamespace("pryst");
    }
    if (!typeRegistry->isNamespaceRegistered("pryst::web")) {
        typeRegistry->registerNamespace("pryst::web");
    }

    // Step 2: Create class types without LLVM types first
    std::cout << "Debug [registerWebTypes]: Creating class types" << std::endl;

    // Request class type
    auto requestClassType = std::make_shared<pryst::ClassType>("pryst::web::Request");
    // Request methods don't take parameters but return string
    requestClassType->addMethod("getMethod", STRING_TYPE, std::vector<std::shared_ptr<Type>>{});
    requestClassType->addMethod("getPath", STRING_TYPE, std::vector<std::shared_ptr<Type>>{});
    requestClassType->addMethod("getHeaders", STRING_TYPE, std::vector<std::shared_ptr<Type>>{});
    requestClassType->addMethod("getBody", STRING_TYPE, std::vector<std::shared_ptr<Type>>{});

    // Response class type
    auto responseClassType = std::make_shared<pryst::ClassType>("pryst::web::Response");
    std::vector<std::shared_ptr<Type>> statusParams = {INT_TYPE};
    std::vector<std::shared_ptr<Type>> bodyParams = {STRING_TYPE};
    std::vector<std::shared_ptr<Type>> contentTypeParams = {STRING_TYPE};
    std::vector<std::shared_ptr<Type>> setContentParams = {STRING_TYPE, STRING_TYPE};

    responseClassType->addMethod("setStatus", VOID_TYPE, statusParams);
    responseClassType->addMethod("setBody", VOID_TYPE, bodyParams);
    responseClassType->addMethod("setContentType", VOID_TYPE, contentTypeParams);
    responseClassType->addMethod("setContent", VOID_TYPE, setContentParams);
    // WebServer class type
    auto serverClassType = std::make_shared<pryst::ClassType>("pryst::web::WebServer");

    // Handler type for get method: function(Request, Response) -> void
    std::vector<std::shared_ptr<Type>> handlerParams = {
        requestClassType,  // Request parameter
        responseClassType  // Response parameter
    };
    auto handlerType = std::make_shared<FunctionType>(VOID_TYPE, handlerParams);

    // Parameters for get method: (path: string, handler: function)
    std::vector<std::shared_ptr<Type>> getParams = {STRING_TYPE, handlerType};
    // Parameters for start method: (port: int)
    std::vector<std::shared_ptr<Type>> startParams = {INT_TYPE};

    serverClassType->addMethod("get", VOID_TYPE, getParams);
    serverClassType->addMethod("start", VOID_TYPE, startParams);

    // Step 3: Cache types in type registry
    std::cout << "Debug [registerWebTypes]: Caching types" << std::endl;
    typeRegistry->cacheType("pryst::web::Request", requestClassType);
    typeRegistry->cacheType("Request", requestClassType);
    typeRegistry->cacheType("pryst::web::Response", responseClassType);
    typeRegistry->cacheType("Response", responseClassType);
    typeRegistry->cacheType("pryst::web::WebServer", serverClassType);
    typeRegistry->cacheType("WebServer", serverClassType);

    // Step 4: Now create LLVM types and register members
    std::cout << "Debug [registerWebTypes]: Creating LLVM types" << std::endl;
    auto strType = typeRegistry->getCachedType("str");

    // Create map type for headers
    auto headersMapType = std::make_shared<MapType>(strType, strType);
    typeRegistry->cacheType("map<str,str>", headersMapType);

    // Request members
    std::vector<std::pair<std::string, llvm::Type*>> requestMembers;
    requestMembers.push_back(std::make_pair("method", typeRegistry->getLLVMType(strType)));
    requestMembers.push_back(std::make_pair("path", typeRegistry->getLLVMType(strType)));
    requestMembers.push_back(std::make_pair("headers", typeRegistry->getLLVMType(headersMapType)));
    requestMembers.push_back(std::make_pair("body", typeRegistry->getLLVMType(strType)));

    // Response members
    std::vector<std::pair<std::string, llvm::Type*>> responseMembers;
    responseMembers.push_back(std::make_pair("status", llvm::Type::getInt32Ty(context)));
    responseMembers.push_back(std::make_pair("headers", typeRegistry->getLLVMType(headersMapType)));
    responseMembers.push_back(std::make_pair("body", typeRegistry->getLLVMType(strType)));
    responseMembers.push_back(std::make_pair("contentType", typeRegistry->getLLVMType(strType)));

    // WebServer members
    std::vector<std::pair<std::string, llvm::Type*>> serverMembers;
    serverMembers.push_back(std::make_pair("routes", typeRegistry->getLLVMType(strType)));

    // Step 5: Create LLVM struct types
    std::cout << "Debug [registerWebTypes]: Creating LLVM struct types" << std::endl;
    std::vector<llvm::Type*> requestFields;
    for (const auto& member : requestMembers) {
        requestFields.push_back(member.second);
    }
    auto requestType = llvm::StructType::create(context, requestFields, "struct.pryst.web.Request");

    std::vector<llvm::Type*> responseFields;
    for (const auto& member : responseMembers) {
        responseFields.push_back(member.second);
    }
    auto responseType = llvm::StructType::create(context, responseFields, "struct.pryst.web.Response");

    std::vector<llvm::Type*> serverFields;
    for (const auto& member : serverMembers) {
        serverFields.push_back(member.second);
    }
    auto serverType = llvm::StructType::create(context, serverFields, "struct.pryst.web.WebServer");

    // Step 6: Register classes with members
    std::cout << "Debug [registerWebTypes]: Registering classes with members" << std::endl;
    typeRegistry->registerClass("pryst::web::Request", requestMembers);
    typeRegistry->registerClass("pryst::web::Response", responseMembers);
    typeRegistry->registerClass("pryst::web::WebServer", serverMembers);

    // Step 7: Register in runtime registry
    std::cout << "Debug [registerWebTypes]: Registering in runtime registry" << std::endl;
    registry.registerClass("Request", "pryst::web::Request", requestType);
    registry.registerClass("Response", "pryst::web::Response", responseType);
    registry.registerClass("WebServer", "pryst::web::WebServer", serverType);

    // Step 8: Register constructors and methods
    std::cout << "Debug [registerWebTypes]: Registering constructors and methods" << std::endl;

    // Register Request constructor
    ClassMethod requestConstructor(
        "Request",
        (void*)&request_constructor,
        std::vector<std::string>{"method", "path", "headers", "body"},
        "pryst::web::Request"
    );
    registry.registerClassMethod("Request", requestConstructor);
    registry.registerClassMethod("pryst::web::Request", requestConstructor);

    // Register Request methods
    ClassMethod requestGetMethod("getMethod", (void*)&request_get_method, std::vector<std::string>{}, "str");
    ClassMethod requestGetPath("getPath", (void*)&request_get_path, std::vector<std::string>{}, "str");
    ClassMethod requestGetHeaders("getHeaders", (void*)&request_get_headers, std::vector<std::string>{}, "str");
    ClassMethod requestGetBody("getBody", (void*)&request_get_body, std::vector<std::string>{}, "str");

    registry.registerClassMethod("pryst::web::Request", requestGetMethod);
    registry.registerClassMethod("Request", requestGetMethod);
    registry.registerClassMethod("pryst::web::Request", requestGetPath);
    registry.registerClassMethod("Request", requestGetPath);
    registry.registerClassMethod("pryst::web::Request", requestGetHeaders);
    registry.registerClassMethod("Request", requestGetHeaders);
    registry.registerClassMethod("pryst::web::Request", requestGetBody);
    registry.registerClassMethod("Request", requestGetBody);

    // Register Response constructor
    typeRegistry->registerConstructor("pryst::web::Response", std::vector<llvm::Type*>{});
    ClassMethod responseConstructor(
        "Response",
        (void*)&response_constructor,
        std::vector<std::string>{},
        "pryst::web::Response"
    );
    registry.registerClassMethod("Response", responseConstructor);
    registry.registerClassMethod("pryst::web::Response", responseConstructor);

    // Register Response methods
    ClassMethod responseSetStatus("setStatus", (void*)&response_set_status, std::vector<std::string>{"status"}, "void");
    ClassMethod responseSetBody("setBody", (void*)&response_set_body, std::vector<std::string>{"body"}, "void");
    ClassMethod responseSetContentType("setContentType", (void*)&response_set_content_type, std::vector<std::string>{"contentType"}, "void");
    ClassMethod responseSetContent("setContent", (void*)&response_set_content, std::vector<std::string>{"content", "contentType"}, "void");

    registry.registerClassMethod("pryst::web::Response", responseSetStatus);
    registry.registerClassMethod("Response", responseSetStatus);
    registry.registerClassMethod("pryst::web::Response", responseSetBody);
    registry.registerClassMethod("Response", responseSetBody);
    registry.registerClassMethod("pryst::web::Response", responseSetContentType);
    registry.registerClassMethod("Response", responseSetContentType);
    registry.registerClassMethod("pryst::web::Response", responseSetContent);
    registry.registerClassMethod("Response", responseSetContent);

    // Register WebServer constructor
    typeRegistry->registerConstructor("pryst::web::WebServer", std::vector<llvm::Type*>{});
    ClassMethod webServerConstructor(
        "WebServer",
        (void*)&webserver_constructor,
        std::vector<std::string>{},
        "pryst::web::WebServer"
    );
    registry.registerClassMethod("WebServer", webServerConstructor);
    registry.registerClassMethod("pryst::web::WebServer", webServerConstructor);

    // Register WebServer methods
    ClassMethod webserverGet("get", (void*)&webserver_get, std::vector<std::string>{"path", "handler"}, "void");
    ClassMethod webserverStart("start", (void*)&webserver_start, std::vector<std::string>{"port"}, "void");

    registry.registerClassMethod("pryst::web::WebServer", webserverGet);
    registry.registerClassMethod("WebServer", webserverGet);
    registry.registerClassMethod("pryst::web::WebServer", webserverStart);
    registry.registerClassMethod("WebServer", webserverStart);

    std::cout << "Debug [registerWebTypes]: All web types registered successfully" << std::endl;
}

} // namespace web
} // namespace runtime
} // namespace pryst
