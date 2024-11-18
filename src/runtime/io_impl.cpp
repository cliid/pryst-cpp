#include "io.hpp"
#include <iostream>
#include <cstring>
#include <memory>
#include <unordered_map>

namespace {
    std::unordered_map<void*, std::shared_ptr<pryst::io::File>> file_handles;
}

extern "C" {

void pryst_print(const char* message) {
    std::cout << message;
}

void* pryst_file_open(const char* filename, const char* mode) {
    try {
        auto file = std::make_shared<pryst::io::File>(filename);
        file->open(mode);
        file_handles[file.get()] = file;
        return file.get();
    } catch (const pryst::io::FileError& e) {
        return nullptr;
    }
}

char* pryst_file_read_to_string(void* file_handle) {
    try {
        auto it = file_handles.find(file_handle);
        if (it == file_handles.end()) return nullptr;

        std::string content = it->second->readToString();
        char* result = new char[content.length() + 1];
        std::strcpy(result, content.c_str());
        return result;
    } catch (const pryst::io::FileError& e) {
        return nullptr;
    }
}

void pryst_file_write_all(void* file_handle, const char* content) {
    try {
        auto it = file_handles.find(file_handle);
        if (it != file_handles.end()) {
            it->second->writeAll(content);
        }
    } catch (const pryst::io::FileError& e) {}
}

void pryst_file_append(void* file_handle, const char* content) {
    try {
        auto it = file_handles.find(file_handle);
        if (it != file_handles.end()) {
            it->second->append(content);
        }
    } catch (const pryst::io::FileError& e) {}
}

char** pryst_file_read_lines(void* file_handle, size_t* line_count) {
    try {
        auto it = file_handles.find(file_handle);
        if (it == file_handles.end()) {
            *line_count = 0;
            return nullptr;
        }

        std::vector<std::string> lines = it->second->readLines();
        *line_count = lines.size();

        char** result = new char*[lines.size()];
        for (size_t i = 0; i < lines.size(); i++) {
            result[i] = new char[lines[i].length() + 1];
            std::strcpy(result[i], lines[i].c_str());
        }
        return result;
    } catch (const pryst::io::FileError& e) {
        *line_count = 0;
        return nullptr;
    }
}

void pryst_file_close(void* file_handle) {
    try {
        auto it = file_handles.find(file_handle);
        if (it != file_handles.end()) {
            it->second->close();
            file_handles.erase(it);
        }
    } catch (const pryst::io::FileError& e) {}
}

} // extern "C"

namespace pryst {
namespace io {

void registerFileClass(pryst::runtime::RuntimeRegistry& registry, llvm::Module* module) {
    // Register File class methods with runtime registry
    registry.registerFunction("pryst_print", (void*)pryst_print);
    registry.registerFunction("pryst_file_open", (void*)pryst_file_open);
    registry.registerFunction("pryst_file_read_to_string", (void*)pryst_file_read_to_string);
    registry.registerFunction("pryst_file_write_all", (void*)pryst_file_write_all);
    registry.registerFunction("pryst_file_append", (void*)pryst_file_append);
    registry.registerFunction("pryst_file_read_lines", (void*)pryst_file_read_lines);
    registry.registerFunction("pryst_file_close", (void*)pryst_file_close);
}

} // namespace io
} // namespace pryst
