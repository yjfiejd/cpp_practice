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
CMAKE_SOURCE_DIR = /Users/a1/CLionProjects/homework02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/a1/CLionProjects/homework02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/homework02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework02.dir/flags.make

CMakeFiles/homework02.dir/main.cpp.o: CMakeFiles/homework02.dir/flags.make
CMakeFiles/homework02.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/a1/CLionProjects/homework02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework02.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework02.dir/main.cpp.o -c /Users/a1/CLionProjects/homework02/main.cpp

CMakeFiles/homework02.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework02.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/a1/CLionProjects/homework02/main.cpp > CMakeFiles/homework02.dir/main.cpp.i

CMakeFiles/homework02.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework02.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/a1/CLionProjects/homework02/main.cpp -o CMakeFiles/homework02.dir/main.cpp.s

CMakeFiles/homework02.dir/myList.cpp.o: CMakeFiles/homework02.dir/flags.make
CMakeFiles/homework02.dir/myList.cpp.o: myList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/a1/CLionProjects/homework02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/homework02.dir/myList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework02.dir/myList.cpp.o -c /Users/a1/CLionProjects/homework02/cmake-build-debug/myList.cpp

CMakeFiles/homework02.dir/myList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework02.dir/myList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/a1/CLionProjects/homework02/cmake-build-debug/myList.cpp > CMakeFiles/homework02.dir/myList.cpp.i

CMakeFiles/homework02.dir/myList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework02.dir/myList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/a1/CLionProjects/homework02/cmake-build-debug/myList.cpp -o CMakeFiles/homework02.dir/myList.cpp.s

# Object files for target homework02
homework02_OBJECTS = \
"CMakeFiles/homework02.dir/main.cpp.o" \
"CMakeFiles/homework02.dir/myList.cpp.o"

# External object files for target homework02
homework02_EXTERNAL_OBJECTS =

homework02: CMakeFiles/homework02.dir/main.cpp.o
homework02: CMakeFiles/homework02.dir/myList.cpp.o
homework02: CMakeFiles/homework02.dir/build.make
homework02: CMakeFiles/homework02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/a1/CLionProjects/homework02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable homework02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homework02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework02.dir/build: homework02

.PHONY : CMakeFiles/homework02.dir/build

CMakeFiles/homework02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/homework02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/homework02.dir/clean

CMakeFiles/homework02.dir/depend:
	cd /Users/a1/CLionProjects/homework02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/a1/CLionProjects/homework02 /Users/a1/CLionProjects/homework02 /Users/a1/CLionProjects/homework02/cmake-build-debug /Users/a1/CLionProjects/homework02/cmake-build-debug /Users/a1/CLionProjects/homework02/cmake-build-debug/CMakeFiles/homework02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/homework02.dir/depend
