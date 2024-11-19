cmake_minimum_required(VERSION 3.10)

# Enable testing
enable_testing()

# Find GTest package
find_package(GTest REQUIRED)

# Add type operations test
add_executable(type_operations_test
    type_operations_test.cpp
)

target_link_libraries(type_operations_test
    PRIVATE
    pryst_lib
    gtest
    gtest_main
)

add_test(NAME type_operations_test COMMAND type_operations_test)
