#include <gtest/gtest.h>
#include <string>
#include <cstdlib>

// Set up test environment
class TestEnvironment : public ::testing::Environment {
public:
    void SetUp() override {
        // Get test files directory from environment variable
        const char* testFilesDir = std::getenv("TEST_FILES_DIR");
        if (testFilesDir) {
            printf("Test files directory: %s\n", testFilesDir);
        } else {
            printf("Warning: TEST_FILES_DIR environment variable not set\n");
        }
    }
};

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    testing::AddGlobalTestEnvironment(new TestEnvironment);
    return RUN_ALL_TESTS();
}
