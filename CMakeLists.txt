cmake_minimum_required(VERSION 3.10)
project(pryst)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0")

# Find required packages
find_package(LLVM 14.0 REQUIRED CONFIG)
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

# Add ANTLR runtime
add_library(antlr4_runtime SHARED IMPORTED)
set_target_properties(antlr4_runtime PROPERTIES
    IMPORTED_LOCATION "/usr/local/lib/libantlr4-runtime.so"
    INTERFACE_INCLUDE_DIRECTORIES "/usr/local/include/antlr4-runtime")

# Collect all source files
file(GLOB_RECURSE SOURCE_FILES
    "src/*.cpp"
    "src/generated/*.cpp"
)

# Collect all test files
file(GLOB_RECURSE TEST_FILES
    "${CMAKE_SOURCE_DIR}/tests/unit/types/*.cpp"
    "${CMAKE_SOURCE_DIR}/tests/unit/parser/*.cpp"
    "${CMAKE_SOURCE_DIR}/tests/unit/runtime/*.cpp"
    "${CMAKE_SOURCE_DIR}/tests/unit/web/*.cpp"
    "${CMAKE_SOURCE_DIR}/tests/test_runner.cpp"
)

# Create test directory structure
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/tests/unit/types)
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/tests/unit/parser)
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/tests/unit/runtime)
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/tests/unit/web)

# Copy test files from unit test directories
file(GLOB_RECURSE PST_TEST_FILES_UNIT
    "${CMAKE_SOURCE_DIR}/tests/unit/types/*.pst"
    "${CMAKE_SOURCE_DIR}/tests/unit/parser/*.pst"
    "${CMAKE_SOURCE_DIR}/tests/unit/runtime/*.pst"
    "${CMAKE_SOURCE_DIR}/tests/unit/web/*.pst"
)

# Copy each test file to its corresponding directory in build
foreach(TEST_FILE ${PST_TEST_FILES_UNIT})
    file(RELATIVE_PATH REL_PATH "${CMAKE_SOURCE_DIR}/tests/unit" ${TEST_FILE})
    get_filename_component(TEST_DIR ${REL_PATH} DIRECTORY)
    file(COPY ${TEST_FILE} DESTINATION "${CMAKE_BINARY_DIR}/tests/unit/${TEST_DIR}")
endforeach()

# Copy any remaining test files from root test directory
file(GLOB PST_TEST_FILES_ROOT "${CMAKE_SOURCE_DIR}/tests/*.pst")
file(COPY ${PST_TEST_FILES_ROOT} DESTINATION ${CMAKE_BINARY_DIR}/tests)

# Main library
add_library(pryst_lib ${SOURCE_FILES})
target_include_directories(pryst_lib PUBLIC
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/include
    ${CMAKE_SOURCE_DIR}/src/generated
    ${CMAKE_SOURCE_DIR}/src/runtime
    ${LLVM_INCLUDE_DIRS}
)

# Get LLVM libraries
llvm_map_components_to_libnames(llvm_libs
    core
    support
    irreader
    analysis
    bitwriter
    mcjit
    native
    orcjit
    x86codegen
)

target_link_libraries(pryst_lib
    antlr4_runtime
    ${llvm_libs}
)

# Test executable
add_executable(run_tests ${TEST_FILES})
target_link_libraries(run_tests
    pryst_lib
    GTest::GTest
    GTest::Main
    antlr4_runtime
    pthread
    ${llvm_libs}
)

# Set TEST_FILES_DIR for tests
set_target_properties(run_tests PROPERTIES
    ENVIRONMENT "TEST_FILES_DIR=${CMAKE_BINARY_DIR}/tests"
)

# Clean up build artifacts
file(REMOVE_RECURSE "${CMAKE_SOURCE_DIR}/src/test/*.o" "${CMAKE_SOURCE_DIR}/src/test/*.o.d")
