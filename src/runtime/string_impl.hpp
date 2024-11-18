#pragma once

#include <string>
#include <vector>
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Function.h"

// Function declarations for runtime bindings
extern "C" {
    void* pryst_core_String_new(const char* value);
    size_t pryst_core_String_length(void* str);
    char* pryst_core_String_substring(void* str, size_t start, size_t length);
    int pryst_core_String_indexOf(void* str, const char* search);
    int pryst_core_String_lastIndexOf(void* str, const char* search);
    char* pryst_core_String_replace(void* str, const char* from, const char* to);
    void* pryst_core_String_split(void* str, const char* delimiter);
    char* pryst_core_String_trim(void* str);
    char* pryst_core_String_toString(void* str);
    void pryst_core_String_delete(void* str);
}

namespace pryst {
namespace core {

class StringImpl {
private:
    std::string value;

public:
    StringImpl(const std::string& value);
    ~StringImpl();

    // Core string operations
    size_t length() const;
    std::string substring(size_t start, size_t length) const;
    int indexOf(const std::string& str) const;
    int lastIndexOf(const std::string& str) const;
    std::string replace(const std::string& from, const std::string& to) const;
    std::vector<std::string> split(const std::string& delimiter) const;
    std::string trim() const;
    std::string toString() const;

    // Static LLVM registration
    static void registerInLLVM(llvm::Module* module, llvm::IRBuilder<>& builder);
};

} // namespace core
} // namespace pryst
