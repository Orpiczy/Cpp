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
CMAKE_SOURCE_DIR = C:\Users\lukas\Exercism\cpp\leap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lukas\Exercism\cpp\leap\cmake-build-debug

# Utility rule file for test_leap.

# Include the progress variables for this target.
include CMakeFiles/test_leap.dir/progress.make

CMakeFiles/test_leap: leap.exe
	.\leap.exe

test_leap: CMakeFiles/test_leap
test_leap: CMakeFiles/test_leap.dir/build.make

.PHONY : test_leap

# Rule to build all files generated by this target.
CMakeFiles/test_leap.dir/build: test_leap

.PHONY : CMakeFiles/test_leap.dir/build

CMakeFiles/test_leap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_leap.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_leap.dir/clean

CMakeFiles/test_leap.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lukas\Exercism\cpp\leap C:\Users\lukas\Exercism\cpp\leap C:\Users\lukas\Exercism\cpp\leap\cmake-build-debug C:\Users\lukas\Exercism\cpp\leap\cmake-build-debug C:\Users\lukas\Exercism\cpp\leap\cmake-build-debug\CMakeFiles\test_leap.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_leap.dir/depend

