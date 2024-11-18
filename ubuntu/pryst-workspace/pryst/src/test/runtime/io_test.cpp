#include "../../runtime/io_impl.hpp"
#include "../../runtime/runtime_registry.hpp"
#include "../../type_registry.hpp"
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
        runtimeRegistry = std::make_unique<RuntimeRegistry>(module.get());
        typeRegistry = std::make_unique<TypeRegistry>(context, *runtimeRegistry);
        runtimeRegistry->setTypeRegistry(typeRegistry.get());
        // Register builtin types and functions
        runtimeRegistry->registerBuiltins();
    }
};

TEST_F(IOTest, FileClassRegistration) {
    // Verify File class registration from registerBuiltins()
    EXPECT_TRUE(typeRegistry->hasClass("pryst::io::File"));

    // Test nullable File type
    typeRegistry->registerNullableType("pryst::io::File");
    auto nullableType = typeRegistry->getCachedType("pryst::io::File?");
    EXPECT_TRUE(nullableType != nullptr);

    // Verify method registration
    const auto* fileClass = runtimeRegistry->getClass("pryst::io::File");
    EXPECT_TRUE(fileClass != nullptr);
    EXPECT_FALSE(fileClass->methods.empty());

    // Verify specific methods exist
    bool hasNewMethod = false;
    bool hasReadStringMethod = false;
    bool hasWriteStringMethod = false;
    bool hasCloseMethod = false;

    for (const auto& method : fileClass->methods) {
        if (method.name == "new") hasNewMethod = true;
        else if (method.name == "readString") hasReadStringMethod = true;
        else if (method.name == "writeString") hasWriteStringMethod = true;
        else if (method.name == "close") hasCloseMethod = true;
    }

    EXPECT_TRUE(hasNewMethod) << "File class should have 'new' method";
    EXPECT_TRUE(hasReadStringMethod) << "File class should have 'readString' method";
    EXPECT_TRUE(hasWriteStringMethod) << "File class should have 'writeString' method";
    EXPECT_TRUE(hasCloseMethod) << "File class should have 'close' method";
}
