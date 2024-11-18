cmake_minimum_required(VERSION 3.10)
project(Pryst VERSION 1.0)

# Set C++17 as required and enable debug symbols
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")

# Enable testing
enable_testing()

# Find GTest package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Find LLVM 14
find_package(LLVM 14 REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Add LLVM flags and definitions
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

# Get LLVM library directory and add to link path
link_directories(/usr/lib/llvm-14/lib)

# Get LLVM library list from llvm-config
execute_process(
    COMMAND llvm-config-14 --libs
    OUTPUT_VARIABLE LLVM_LIBS
    OUTPUT_STRIP_TRAILING_WHITESPACE
)
message(STATUS "LLVM Libs from llvm-config: ${LLVM_LIBS}")

# Find Boehm GC
find_package(PkgConfig REQUIRED)
pkg_check_modules(GC REQUIRED bdw-gc)
include_directories(${GC_INCLUDE_DIRS})
link_directories(${GC_LIBRARY_DIRS})

# Find cpp-httplib
pkg_check_modules(HTTPLIB REQUIRED cpp-httplib)
include_directories(${HTTPLIB_INCLUDE_DIRS})
link_directories(${HTTPLIB_LIBRARY_DIRS})

# Find Java for ANTLR
find_package(Java REQUIRED COMPONENTS Runtime)

# Set up ANTLR4 with platform-specific paths
if(DEFINED ENV{ANTLR4_ROOT})
    set(ANTLR4_ROOT $ENV{ANTLR4_ROOT})
else()
    if(APPLE)
        set(ANTLR4_ROOT "/usr/local")
    else()
        set(ANTLR4_ROOT "/usr/local")
    endif()
endif()

# Find ANTLR4 Runtime Library
find_library(ANTLR4_RUNTIME_LIB NAMES antlr4-runtime PATHS ${ANTLR4_ROOT}/lib)
if(NOT ANTLR4_RUNTIME_LIB)
    message(FATAL_ERROR "ANTLR4 runtime library not found. Please install it first.")
endif()
message(STATUS "Found ANTLR4 Runtime: ${ANTLR4_RUNTIME_LIB}")

set(ANTLR4_JAR_LOCATION ${ANTLR4_ROOT}/lib/antlr-4.13.2-complete.jar)
set(ANTLR4_INCLUDE_DIR ${ANTLR4_ROOT}/include/antlr4-runtime)

# Set up generated files directory
set(GENERATED_DIR "${CMAKE_SOURCE_DIR}/src/generated")
set(GENERATED_SRC
    ${GENERATED_DIR}/PrystLexer.cpp
    ${GENERATED_DIR}/PrystParser.cpp
    ${GENERATED_DIR}/PrystParserBaseVisitor.cpp
    ${GENERATED_DIR}/PrystParserVisitor.cpp
)

set(GENERATED_HEADERS
    ${GENERATED_DIR}/PrystLexer.h
    ${GENERATED_DIR}/PrystParser.h
    ${GENERATED_DIR}/PrystParserBaseVisitor.h
    ${GENERATED_DIR}/PrystParserVisitor.h
)

# Create custom target for generated files
add_custom_target(antlr4_generation
    COMMAND
        java -jar ${ANTLR4_JAR_LOCATION} -Dlanguage=Cpp -no-listener -visitor
        -package pryst
        -o ${GENERATED_DIR}
        ${CMAKE_SOURCE_DIR}/src/PrystLexer.g4
        ${CMAKE_SOURCE_DIR}/src/PrystParser.g4
    DEPENDS
        ${CMAKE_SOURCE_DIR}/src/PrystLexer.g4
        ${CMAKE_SOURCE_DIR}/src/PrystParser.g4
)

# Include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/generated
    ${ANTLR4_INCLUDE_DIR}
)

# Add source files (excluding main.cpp for library use)
set(LIB_SOURCE_FILES
    src/compiler.cpp
    src/type_checker.cpp
    src/llvm_codegen.cpp
    src/runtime.cpp
    src/webserver.cpp
    src/types.cpp
    src/type_registry.cpp
    src/diagnostic_error_listener.cpp
    src/runtime/io.cpp
    src/runtime/runtime_registry.cpp
    src/runtime/web.cpp
    src/runtime/web_types.cpp
    src/runtime/web_impl.cpp
    src/runtime/map_impl.cpp
    src/runtime/array_impl.cpp
    src/runtime/string_impl.cpp
    src/runtime/error_impl.cpp
    src/runtime/error_bindings.cpp
    src/runtime/string_bindings.cpp
    src/runtime/array_bindings.cpp
    src/runtime/map_bindings.cpp
    src/runtime/io_impl.cpp
    src/runtime/io_bindings.cpp
)

# Add header files
set(HEADER_FILES
    src/diagnostic_error_listener.hpp
    src/error.hpp
    src/runtime/io.hpp
    src/runtime/runtime_registry.hpp
    src/runtime/web.hpp
    src/runtime/web_types.hpp
    src/runtime/web_impl.hpp
    src/runtime/map_impl.hpp
    src/runtime/array_impl.hpp
    src/runtime/string_impl.hpp
    src/runtime/error_impl.hpp
    src/runtime/io_impl.hpp
)

# Add main executable
add_executable(pryst
    src/main.cpp
    ${LIB_SOURCE_FILES}
    ${GENERATED_SRC}
    ${HEADER_FILES}
)
add_dependencies(pryst antlr4_generation)

# Add unified test executable
add_executable(run_tests
    src/test/test_runner.cpp
    src/test/parser_test.cpp
    src/test/webserver_test.cpp
    src/test/map_type_test.cpp
    src/test/runtime/io_test.cpp  # Updated path to reflect new location
    ${LIB_SOURCE_FILES}
    ${GENERATED_SRC}
)
add_dependencies(run_tests antlr4_generation)

# Link libraries for main executable and unified test target
foreach(target pryst run_tests)
    target_link_libraries(${target}
        ${ANTLR4_RUNTIME_LIB}
        LLVM-14
        ${GC_LIBRARIES}
        ${HTTPLIB_LIBRARIES}
        pthread
        dl
    )

    target_include_directories(${target} PRIVATE
        ${GENERATED_DIR}
        ${CMAKE_SOURCE_DIR}/src
        ${ANTLR4_INCLUDE_DIR}
    )
endforeach()

# Add GTest only to run_tests target
target_link_libraries(run_tests
    ${GTEST_LIBRARIES}
    gtest
    gtest_main
)

target_include_directories(run_tests PRIVATE
    ${GTEST_INCLUDE_DIRS}
)

# Create unified test directory structure
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/tests)

# Copy test files during configure phase
file(GLOB_RECURSE ALL_PST_FILES
    "${CMAKE_SOURCE_DIR}/src/test/*.pst"
    "${CMAKE_SOURCE_DIR}/tests/*.pst"
)

# Copy each test file to the build directory
foreach(TEST_FILE ${ALL_PST_FILES})
    get_filename_component(FILENAME ${TEST_FILE} NAME)
    configure_file(${TEST_FILE} ${CMAKE_BINARY_DIR}/tests/${FILENAME} COPYONLY)
endforeach()

# Add unified test suite
add_test(NAME PrystTests COMMAND run_tests)

# Set test environment
set_tests_properties(PrystTests PROPERTIES
    ENVIRONMENT "TEST_FILES_DIR=${CMAKE_BINARY_DIR}/tests"
)
