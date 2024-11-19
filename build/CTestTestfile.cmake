# CMake generated Testfile for 
# Source directory: /home/ubuntu/workspace/pryst-cpp
# Build directory: /home/ubuntu/workspace/pryst-cpp/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(PrystTests "/home/ubuntu/workspace/pryst-cpp/build/run_tests")
set_tests_properties(PrystTests PROPERTIES  ENVIRONMENT "TEST_FILES_DIR=/home/ubuntu/workspace/pryst-cpp/build/tests" _BACKTRACE_TRIPLES "/home/ubuntu/workspace/pryst-cpp/CMakeLists.txt;238;add_test;/home/ubuntu/workspace/pryst-cpp/CMakeLists.txt;0;")
subdirs("unified_tests")
