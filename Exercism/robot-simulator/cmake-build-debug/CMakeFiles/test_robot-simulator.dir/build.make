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
CMAKE_SOURCE_DIR = C:\Users\lukas\Exercism\cpp\robot-simulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lukas\Exercism\cpp\robot-simulator\cmake-build-debug

# Utility rule file for test_robot-simulator.

# Include the progress variables for this target.
include CMakeFiles/test_robot-simulator.dir/progress.make

CMakeFiles/test_robot-simulator: robot-simulator.exe
	.\robot-simulator.exe

test_robot-simulator: CMakeFiles/test_robot-simulator
test_robot-simulator: CMakeFiles/test_robot-simulator.dir/build.make

.PHONY : test_robot-simulator

# Rule to build all files generated by this target.
CMakeFiles/test_robot-simulator.dir/build: test_robot-simulator

.PHONY : CMakeFiles/test_robot-simulator.dir/build

CMakeFiles/test_robot-simulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_robot-simulator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_robot-simulator.dir/clean

CMakeFiles/test_robot-simulator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lukas\Exercism\cpp\robot-simulator C:\Users\lukas\Exercism\cpp\robot-simulator C:\Users\lukas\Exercism\cpp\robot-simulator\cmake-build-debug C:\Users\lukas\Exercism\cpp\robot-simulator\cmake-build-debug C:\Users\lukas\Exercism\cpp\robot-simulator\cmake-build-debug\CMakeFiles\test_robot-simulator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_robot-simulator.dir/depend

