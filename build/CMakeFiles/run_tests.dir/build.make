# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/pryst-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/pryst-cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/run_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/run_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/run_tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run_tests.dir/flags.make

CMakeFiles/run_tests.dir/tests/test_runner.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/tests/test_runner.cpp.o: ../tests/test_runner.cpp
CMakeFiles/run_tests.dir/tests/test_runner.cpp.o: CMakeFiles/run_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/pryst-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run_tests.dir/tests/test_runner.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/run_tests.dir/tests/test_runner.cpp.o -MF CMakeFiles/run_tests.dir/tests/test_runner.cpp.o.d -o CMakeFiles/run_tests.dir/tests/test_runner.cpp.o -c /home/ubuntu/pryst-cpp/tests/test_runner.cpp

CMakeFiles/run_tests.dir/tests/test_runner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/tests/test_runner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/pryst-cpp/tests/test_runner.cpp > CMakeFiles/run_tests.dir/tests/test_runner.cpp.i

CMakeFiles/run_tests.dir/tests/test_runner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/tests/test_runner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/pryst-cpp/tests/test_runner.cpp -o CMakeFiles/run_tests.dir/tests/test_runner.cpp.s

CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o: ../tests/unit/parser/parser_test.cpp
CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o: CMakeFiles/run_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/pryst-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o -MF CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o.d -o CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o -c /home/ubuntu/pryst-cpp/tests/unit/parser/parser_test.cpp

CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/pryst-cpp/tests/unit/parser/parser_test.cpp > CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.i

CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/pryst-cpp/tests/unit/parser/parser_test.cpp -o CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.s

CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o: ../tests/unit/runtime/io_test.cpp
CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o: CMakeFiles/run_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/pryst-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o -MF CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o.d -o CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o -c /home/ubuntu/pryst-cpp/tests/unit/runtime/io_test.cpp

CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/pryst-cpp/tests/unit/runtime/io_test.cpp > CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.i

CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/pryst-cpp/tests/unit/runtime/io_test.cpp -o CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.s

CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o: ../tests/unit/types/map_type_test.cpp
CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o: CMakeFiles/run_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/pryst-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o -MF CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o.d -o CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o -c /home/ubuntu/pryst-cpp/tests/unit/types/map_type_test.cpp

CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/pryst-cpp/tests/unit/types/map_type_test.cpp > CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.i

CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/pryst-cpp/tests/unit/types/map_type_test.cpp -o CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.s

CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o: CMakeFiles/run_tests.dir/flags.make
CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o: ../tests/unit/web/webserver_test.cpp
CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o: CMakeFiles/run_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/pryst-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o -MF CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o.d -o CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o -c /home/ubuntu/pryst-cpp/tests/unit/web/webserver_test.cpp

CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/pryst-cpp/tests/unit/web/webserver_test.cpp > CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.i

CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/pryst-cpp/tests/unit/web/webserver_test.cpp -o CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.s

# Object files for target run_tests
run_tests_OBJECTS = \
"CMakeFiles/run_tests.dir/tests/test_runner.cpp.o" \
"CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o" \
"CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o" \
"CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o" \
"CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o"

# External object files for target run_tests
run_tests_EXTERNAL_OBJECTS =

run_tests: CMakeFiles/run_tests.dir/tests/test_runner.cpp.o
run_tests: CMakeFiles/run_tests.dir/tests/unit/parser/parser_test.cpp.o
run_tests: CMakeFiles/run_tests.dir/tests/unit/runtime/io_test.cpp.o
run_tests: CMakeFiles/run_tests.dir/tests/unit/types/map_type_test.cpp.o
run_tests: CMakeFiles/run_tests.dir/tests/unit/web/webserver_test.cpp.o
run_tests: CMakeFiles/run_tests.dir/build.make
run_tests: libpryst_lib.a
run_tests: /usr/local/lib/libgtest.a
run_tests: /usr/local/lib/libgtest_main.a
run_tests: /usr/local/lib/libantlr4-runtime.so
run_tests: /usr/lib/llvm-14/lib/libLLVMCore.a
run_tests: /usr/lib/llvm-14/lib/libLLVMSupport.a
run_tests: /usr/lib/llvm-14/lib/libLLVMIRReader.a
run_tests: /usr/lib/llvm-14/lib/libLLVMAnalysis.a
run_tests: /usr/lib/llvm-14/lib/libLLVMBitWriter.a
run_tests: /usr/lib/llvm-14/lib/libLLVMMCJIT.a
run_tests: /usr/lib/llvm-14/lib/libLLVMOrcJIT.a
run_tests: /usr/lib/llvm-14/lib/libLLVMX86CodeGen.a
run_tests: /usr/lib/llvm-14/lib/libLLVMX86CodeGen.a
run_tests: /usr/lib/llvm-14/lib/libLLVMX86AsmParser.a
run_tests: /usr/lib/llvm-14/lib/libLLVMX86Desc.a
run_tests: /usr/lib/llvm-14/lib/libLLVMX86Disassembler.a
run_tests: /usr/lib/llvm-14/lib/libLLVMX86Info.a
run_tests: /usr/lib/llvm-14/lib/libLLVMExecutionEngine.a
run_tests: /usr/lib/llvm-14/lib/libLLVMRuntimeDyld.a
run_tests: /usr/lib/llvm-14/lib/libLLVMPasses.a
run_tests: /usr/lib/llvm-14/lib/libLLVMCoroutines.a
run_tests: /usr/lib/llvm-14/lib/libLLVMipo.a
run_tests: /usr/lib/llvm-14/lib/libLLVMIRReader.a
run_tests: /usr/lib/llvm-14/lib/libLLVMAsmParser.a
run_tests: /usr/lib/llvm-14/lib/libLLVMFrontendOpenMP.a
run_tests: /usr/lib/llvm-14/lib/libLLVMLinker.a
run_tests: /usr/lib/llvm-14/lib/libLLVMObjCARCOpts.a
run_tests: /usr/lib/llvm-14/lib/libLLVMVectorize.a
run_tests: /usr/lib/llvm-14/lib/libLLVMJITLink.a
run_tests: /usr/lib/llvm-14/lib/libLLVMOrcTargetProcess.a
run_tests: /usr/lib/llvm-14/lib/libLLVMOrcShared.a
run_tests: /usr/lib/llvm-14/lib/libLLVMAsmPrinter.a
run_tests: /usr/lib/llvm-14/lib/libLLVMDebugInfoMSF.a
run_tests: /usr/lib/llvm-14/lib/libLLVMInstrumentation.a
run_tests: /usr/lib/llvm-14/lib/libLLVMGlobalISel.a
run_tests: /usr/lib/llvm-14/lib/libLLVMSelectionDAG.a
run_tests: /usr/lib/llvm-14/lib/libLLVMCodeGen.a
run_tests: /usr/lib/llvm-14/lib/libLLVMBitWriter.a
run_tests: /usr/lib/llvm-14/lib/libLLVMTarget.a
run_tests: /usr/lib/llvm-14/lib/libLLVMScalarOpts.a
run_tests: /usr/lib/llvm-14/lib/libLLVMAggressiveInstCombine.a
run_tests: /usr/lib/llvm-14/lib/libLLVMInstCombine.a
run_tests: /usr/lib/llvm-14/lib/libLLVMTransformUtils.a
run_tests: /usr/lib/llvm-14/lib/libLLVMAnalysis.a
run_tests: /usr/lib/llvm-14/lib/libLLVMProfileData.a
run_tests: /usr/lib/llvm-14/lib/libLLVMDebugInfoDWARF.a
run_tests: /usr/lib/llvm-14/lib/libLLVMObject.a
run_tests: /usr/lib/llvm-14/lib/libLLVMBitReader.a
run_tests: /usr/lib/llvm-14/lib/libLLVMTextAPI.a
run_tests: /usr/lib/llvm-14/lib/libLLVMCFGuard.a
run_tests: /usr/lib/llvm-14/lib/libLLVMCore.a
run_tests: /usr/lib/llvm-14/lib/libLLVMRemarks.a
run_tests: /usr/lib/llvm-14/lib/libLLVMBitstreamReader.a
run_tests: /usr/lib/llvm-14/lib/libLLVMMCParser.a
run_tests: /usr/lib/llvm-14/lib/libLLVMMCDisassembler.a
run_tests: /usr/lib/llvm-14/lib/libLLVMMC.a
run_tests: /usr/lib/llvm-14/lib/libLLVMBinaryFormat.a
run_tests: /usr/lib/llvm-14/lib/libLLVMDebugInfoCodeView.a
run_tests: /usr/lib/llvm-14/lib/libLLVMSupport.a
run_tests: /usr/lib/x86_64-linux-gnu/libz.so
run_tests: /usr/lib/x86_64-linux-gnu/libtinfo.so
run_tests: /usr/lib/llvm-14/lib/libLLVMDemangle.a
run_tests: /usr/local/lib/libgtest.a
run_tests: CMakeFiles/run_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/pryst-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable run_tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run_tests.dir/build: run_tests
.PHONY : CMakeFiles/run_tests.dir/build

CMakeFiles/run_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run_tests.dir/clean

CMakeFiles/run_tests.dir/depend:
	cd /home/ubuntu/pryst-cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/pryst-cpp /home/ubuntu/pryst-cpp /home/ubuntu/pryst-cpp/build /home/ubuntu/pryst-cpp/build /home/ubuntu/pryst-cpp/build/CMakeFiles/run_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run_tests.dir/depend

