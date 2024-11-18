#include <gtest/gtest.h>
#include <iostream>
#include <filesystem>
#include <fstream>
#include "llvm/Support/Debug.h"

// Enable debug logging for LLVM
#define DEBUG_TYPE "pryst-tests"

class TestEnvironment : public ::testing::Environment {
public:
    void SetUp() override {
        try {
            std::cout << "Initializing test environment..." << std::endl;

            // Set up test files directory
            const char* test_dir = std::getenv("TEST_FILES_DIR");
            std::filesystem::path test_path;

            // Log current working directory for debugging
            std::cout << "Current working directory: " << std::filesystem::current_path().string() << std::endl;

            // Explicitly check for NULL or empty string
            if (!test_dir || strlen(test_dir) == 0) {
                std::cout << "TEST_FILES_DIR not set, using default path" << std::endl;
                // If not set, use default path relative to binary
                std::filesystem::path binary_path = std::filesystem::current_path();
                test_path = binary_path / "tests";
                std::cout << "Setting TEST_FILES_DIR to: " << test_path.string() << std::endl;
            } else {
                std::cout << "TEST_FILES_DIR found in environment" << std::endl;
                test_path = std::filesystem::path(test_dir);
                std::cout << "Using TEST_FILES_DIR from environment: " << test_path.string() << std::endl;
            }

            // Validate path before any operations
            if (test_path.empty()) {
                throw std::runtime_error("Test path is empty");
            }

            // Check if path contains invalid characters
            if (test_path.string().find('\0') != std::string::npos) {
                throw std::runtime_error("Test path contains invalid characters");
            }

            // Create test directory if it doesn't exist
            if (!std::filesystem::exists(test_path)) {
                std::cout << "Test directory does not exist, creating: " << test_path.string() << std::endl;
                std::error_code ec;
                if (!std::filesystem::create_directories(test_path, ec)) {
                    throw std::runtime_error("Failed to create test directory: " + test_path.string() +
                                           " (Error: " + ec.message() + ")");
                }
                std::cout << "Successfully created test directory" << std::endl;
            }

            // Verify directory is accessible and writable
            std::error_code ec;
            if (!std::filesystem::is_directory(test_path, ec)) {
                throw std::runtime_error("Test path exists but is not a directory: " + test_path.string() +
                                       " (Error: " + ec.message() + ")");
            }

            // Try to create a temporary file to verify write permissions
            auto temp_file = test_path / "write_test.tmp";
            try {
                std::ofstream test_write(temp_file);
                if (!test_write.is_open()) {
                    throw std::runtime_error("Cannot open file for writing");
                }
                test_write << "test";
                test_write.close();
                std::filesystem::remove(temp_file);
            } catch (const std::exception& e) {
                throw std::runtime_error("Directory is not writable: " + test_path.string() +
                                       " (Error: " + std::string(e.what()) + ")");
            }

            // Set environment variable with the canonical path
            std::filesystem::path canonical_path;
            try {
                canonical_path = std::filesystem::canonical(test_path);
            } catch (const std::filesystem::filesystem_error& e) {
                throw std::runtime_error("Failed to get canonical path: " + test_path.string() +
                                       " (Error: " + e.what() + ")");
            }

            if (setenv("TEST_FILES_DIR", canonical_path.c_str(), 1) != 0) {
                throw std::runtime_error("Failed to set TEST_FILES_DIR environment variable");
            }
            std::cout << "Test directory initialized: " << canonical_path.string() << std::endl;

            std::cout << "Test environment initialized successfully" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error initializing test environment: " << e.what() << std::endl;
            throw; // Re-throw to ensure test framework sees the failure
        }
    }
};

int main(int argc, char **argv) {
    // Initialize Google Test
    testing::InitGoogleTest(&argc, argv);

    // Add global test environment
    testing::AddGlobalTestEnvironment(new TestEnvironment);

    // Set up debug logging
    llvm::DebugFlag = true;
    llvm::setCurrentDebugType(DEBUG_TYPE);

    std::cout << "Running Pryst test suite..." << std::endl;
    std::cout << "Debug logging enabled for: " << DEBUG_TYPE << std::endl;

    // Run all tests
    return RUN_ALL_TESTS();
}
