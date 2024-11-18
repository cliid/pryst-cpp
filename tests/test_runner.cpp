#include <gtest/gtest.h>
#include <filesystem>
#include <string>
#include "../src/compiler.hpp"

namespace fs = std::filesystem;

class PrystTest : public ::testing::Test {
protected:
    void SetUp() override {
        compiler = std::make_unique<pryst::Compiler>();
    }

    std::unique_ptr<pryst::Compiler> compiler;
};

// Auto-discover and run all .pst test files
TEST_F(PrystTest, RunAllTests) {
    for(const auto& entry : fs::recursive_directory_iterator("tests/unit")) {
        if(entry.path().extension() == ".pst") {
            std::cout << "Running test file: " << entry.path() << std::endl;
            EXPECT_TRUE(compiler->compileFile(entry.path().string()));
        }
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
