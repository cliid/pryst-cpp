#include "io.hpp"
#include "runtime_registry.hpp"
#include "llvm/IR/Type.h"
#include "llvm/IR/DerivedTypes.h"
#include "io_impl.hpp"

namespace pryst {
namespace io {

// Static wrapper functions
static void* file_new(const std::string& filename) {
    return new FileImpl(filename);
}

static std::string file_readString(FileImpl* file) {
    std::string* result = file->readString();
    if (!result) {
        // Handle error case - return empty string for now
        // In future we might want to throw an exception
        return "";
    }
    std::string value = *result;
    delete result;
    return value;
}

static bool file_writeString(FileImpl* file, const std::string& content) {
    return file->writeString(content);
}

static void file_close(FileImpl* file) {
    file->close();
}

static void file_delete(FileImpl* file) {
    delete file;
}

void registerFileClass(pryst::runtime::RuntimeRegistry& registry, llvm::Module* module) {
    // Get File struct type from module
    auto* fileStructTy = llvm::StructType::getTypeByName(module->getContext(), "struct.pryst.io.File");
    if (!fileStructTy) {
        // Create LLVM struct type for File class if it doesn't exist
        std::vector<llvm::Type*> fileMembers = {
            llvm::PointerType::get(llvm::Type::getInt8Ty(module->getContext()), 0), // filename (char*)
            llvm::Type::getInt1Ty(module->getContext())  // isOpen (bool)
        };
        fileStructTy = llvm::StructType::create(module->getContext(), fileMembers, "struct.pryst.io.File");
    }

    // Register File class
    registry.registerClass("File", "pryst::io::File", fileStructTy);

    // Register constructor
    registry.registerClassMethod("File", pryst::runtime::ClassMethod{
        "File",  // Using class name as constructor name
        (void*)file_new,
        {"str"},  // filename
        "File"
    });

    // Register readString method
    registry.registerClassMethod("File", pryst::runtime::ClassMethod{
        "readString",
        (void*)file_readString,
        {},  // no parameters
        "str"
    });

    // Register writeString method
    registry.registerClassMethod("File", pryst::runtime::ClassMethod{
        "writeString",
        (void*)file_writeString,
        {"str"},  // content
        "bool"
    });

    // Register close method
    registry.registerClassMethod("File", pryst::runtime::ClassMethod{
        "close",
        (void*)file_close,
        {},  // no parameters
        "void"
    });

    // Register destructor
    registry.registerClassMethod("File", pryst::runtime::ClassMethod{
        "delete",
        (void*)file_delete,
        {},  // no parameters
        "void"
    });
}

} // namespace io
} // namespace pryst
