# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lukas\Exercism\cpp\reverse-string

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lukas\Exercism\cpp\reverse-string\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/reverse-string.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reverse-string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reverse-string.dir/flags.make

CMakeFiles/reverse-string.dir/reverse_string_test.cpp.obj: CMakeFiles/reverse-string.dir/flags.make
CMakeFiles/reverse-string.dir/reverse_string_test.cpp.obj: ../reverse_string_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lukas\Exercism\cpp\reverse-string\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reverse-string.dir/reverse_string_test.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reverse-string.dir\reverse_string_test.cpp.obj -c C:\Users\lukas\Exercism\cpp\reverse-string\reverse_string_test.cpp

CMakeFiles/reverse-string.dir/reverse_string_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse-string.dir/reverse_string_test.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lukas\Exercism\cpp\reverse-string\reverse_string_test.cpp > CMakeFiles\reverse-string.dir\reverse_string_test.cpp.i

CMakeFiles/reverse-string.dir/reverse_string_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse-string.dir/reverse_string_test.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lukas\Exercism\cpp\reverse-string\reverse_string_test.cpp -o CMakeFiles\reverse-string.dir\reverse_string_test.cpp.s

CMakeFiles/reverse-string.dir/reverse_string.cpp.obj: CMakeFiles/reverse-string.dir/flags.make
CMakeFiles/reverse-string.dir/reverse_string.cpp.obj: ../reverse_string.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lukas\Exercism\cpp\reverse-string\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/reverse-string.dir/reverse_string.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reverse-string.dir\reverse_string.cpp.obj -c C:\Users\lukas\Exercism\cpp\reverse-string\reverse_string.cpp

CMakeFiles/reverse-string.dir/reverse_string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse-string.dir/reverse_string.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lukas\Exercism\cpp\reverse-string\reverse_string.cpp > CMakeFiles\reverse-string.dir\reverse_string.cpp.i

CMakeFiles/reverse-string.dir/reverse_string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse-string.dir/reverse_string.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lukas\Exercism\cpp\reverse-string\reverse_string.cpp -o CMakeFiles\reverse-string.dir\reverse_string.cpp.s

CMakeFiles/reverse-string.dir/test/tests-main.cpp.obj: CMakeFiles/reverse-string.dir/flags.make
CMakeFiles/reverse-string.dir/test/tests-main.cpp.obj: ../test/tests-main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lukas\Exercism\cpp\reverse-string\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/reverse-string.dir/test/tests-main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reverse-string.dir\test\tests-main.cpp.obj -c C:\Users\lukas\Exercism\cpp\reverse-string\test\tests-main.cpp

CMakeFiles/reverse-string.dir/test/tests-main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse-string.dir/test/tests-main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lukas\Exercism\cpp\reverse-string\test\tests-main.cpp > CMakeFiles\reverse-string.dir\test\tests-main.cpp.i

CMakeFiles/reverse-string.dir/test/tests-main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse-string.dir/test/tests-main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lukas\Exercism\cpp\reverse-string\test\tests-main.cpp -o CMakeFiles\reverse-string.dir\test\tests-main.cpp.s

# Object files for target reverse-string
reverse__string_OBJECTS = \
"CMakeFiles/reverse-string.dir/reverse_string_test.cpp.obj" \
"CMakeFiles/reverse-string.dir/reverse_string.cpp.obj" \
"CMakeFiles/reverse-string.dir/test/tests-main.cpp.obj"

# External object files for target reverse-string
reverse__string_EXTERNAL_OBJECTS =

reverse-string.exe: CMakeFiles/reverse-string.dir/reverse_string_test.cpp.obj
reverse-string.exe: CMakeFiles/reverse-string.dir/reverse_string.cpp.obj
reverse-string.exe: CMakeFiles/reverse-string.dir/test/tests-main.cpp.obj
reverse-string.exe: CMakeFiles/reverse-string.dir/build.make
reverse-string.exe: CMakeFiles/reverse-string.dir/linklibs.rsp
reverse-string.exe: CMakeFiles/reverse-string.dir/objects1.rsp
reverse-string.exe: CMakeFiles/reverse-string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lukas\Exercism\cpp\reverse-string\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable reverse-string.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\reverse-string.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reverse-string.dir/build: reverse-string.exe

.PHONY : CMakeFiles/reverse-string.dir/build

CMakeFiles/reverse-string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\reverse-string.dir\cmake_clean.cmake
.PHONY : CMakeFiles/reverse-string.dir/clean

CMakeFiles/reverse-string.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lukas\Exercism\cpp\reverse-string C:\Users\lukas\Exercism\cpp\reverse-string C:\Users\lukas\Exercism\cpp\reverse-string\cmake-build-debug C:\Users\lukas\Exercism\cpp\reverse-string\cmake-build-debug C:\Users\lukas\Exercism\cpp\reverse-string\cmake-build-debug\CMakeFiles\reverse-string.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reverse-string.dir/depend

