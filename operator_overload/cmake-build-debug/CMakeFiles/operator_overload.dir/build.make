# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/a1/CLionProjects/operator_overload

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/a1/CLionProjects/operator_overload/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/operator_overload.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/operator_overload.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/operator_overload.dir/flags.make

CMakeFiles/operator_overload.dir/main.cpp.o: CMakeFiles/operator_overload.dir/flags.make
CMakeFiles/operator_overload.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/a1/CLionProjects/operator_overload/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/operator_overload.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/operator_overload.dir/main.cpp.o -c /Users/a1/CLionProjects/operator_overload/main.cpp

CMakeFiles/operator_overload.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operator_overload.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/a1/CLionProjects/operator_overload/main.cpp > CMakeFiles/operator_overload.dir/main.cpp.i

CMakeFiles/operator_overload.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operator_overload.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/a1/CLionProjects/operator_overload/main.cpp -o CMakeFiles/operator_overload.dir/main.cpp.s

# Object files for target operator_overload
operator_overload_OBJECTS = \
"CMakeFiles/operator_overload.dir/main.cpp.o"

# External object files for target operator_overload
operator_overload_EXTERNAL_OBJECTS =

operator_overload: CMakeFiles/operator_overload.dir/main.cpp.o
operator_overload: CMakeFiles/operator_overload.dir/build.make
operator_overload: CMakeFiles/operator_overload.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/a1/CLionProjects/operator_overload/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable operator_overload"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operator_overload.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/operator_overload.dir/build: operator_overload

.PHONY : CMakeFiles/operator_overload.dir/build

CMakeFiles/operator_overload.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/operator_overload.dir/cmake_clean.cmake
.PHONY : CMakeFiles/operator_overload.dir/clean

CMakeFiles/operator_overload.dir/depend:
	cd /Users/a1/CLionProjects/operator_overload/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/a1/CLionProjects/operator_overload /Users/a1/CLionProjects/operator_overload /Users/a1/CLionProjects/operator_overload/cmake-build-debug /Users/a1/CLionProjects/operator_overload/cmake-build-debug /Users/a1/CLionProjects/operator_overload/cmake-build-debug/CMakeFiles/operator_overload.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/operator_overload.dir/depend

