#include "io_impl.hpp"
#include "runtime_registry.hpp"
#include "../type_registry.hpp"
#include <gtest/gtest.h>
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"

using namespace pryst;
using namespace pryst::runtime;

class IOTest : public ::testing::Test {
protected:
    llvm::LLVMContext context;
    std::unique_ptr<llvm::Module> module;
    std::unique_ptr<TypeRegistry> typeRegistry;
    std::unique_ptr<RuntimeRegistry> runtimeRegistry;

    void SetUp() override {
        module = std::make_unique<llvm::Module>("test_module", context);
        typeRegistry = std::make_unique<TypeRegistry>(context);
        runtimeRegistry = std::make_unique<RuntimeRegistry>(module.get());
        runtimeRegistry->setTypeRegistry(typeRegistry.get());
    }
};

TEST_F(IOTest, FileClassRegistration) {
    // Test File class registration
    std::vector<std::pair<std::string, llvm::Type*>> fileMembers;
    auto* i8PtrType = llvm::PointerType::get(llvm::Type::getInt8Ty(context), 0);
    fileMembers.push_back({"path", i8PtrType});  // String path
    fileMembers.push_back({"mode", i8PtrType});  // String mode
    fileMembers.push_back({"handle", i8PtrType}); // FILE* handle

    // Register File class
    typeRegistry->registerClass("pryst::io::File", fileMembers);

    // Verify class registration
    EXPECT_TRUE(typeRegistry->hasClass("pryst::io::File"));

    // Test nullable File type
    typeRegistry->registerNullableType("pryst::io::File");
    auto nullableType = typeRegistry->getCachedType("pryst::io::File?");
    EXPECT_TRUE(nullableType != nullptr);

    // Test method registration
    std::vector<llvm::Type*> writeParams = {i8PtrType};  // String content
    auto* voidType = llvm::Type::getVoidTy(context);
    auto* writeFuncType = llvm::FunctionType::get(voidType, writeParams, false);

    ClassMethod writeMethod("write", nullptr, {"str"}, "void");
    runtimeRegistry->registerClassMethod("pryst::io::File", writeMethod);

    // Verify method registration
    const auto* fileClass = runtimeRegistry->getClass("pryst::io::File");
    EXPECT_TRUE(fileClass != nullptr);
    EXPECT_FALSE(fileClass->methods.empty());
    EXPECT_EQ(fileClass->methods[0].name, "write");
}
