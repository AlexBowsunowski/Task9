# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/135/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/135/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aleksandr/Documents/gitproj/Task9_full

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aleksandr/Documents/gitproj/Task9_full/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Task9_full.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Task9_full.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task9_full.dir/flags.make

CMakeFiles/Task9_full.dir/main.cpp.o: CMakeFiles/Task9_full.dir/flags.make
CMakeFiles/Task9_full.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aleksandr/Documents/gitproj/Task9_full/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task9_full.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task9_full.dir/main.cpp.o -c /home/aleksandr/Documents/gitproj/Task9_full/main.cpp

CMakeFiles/Task9_full.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task9_full.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aleksandr/Documents/gitproj/Task9_full/main.cpp > CMakeFiles/Task9_full.dir/main.cpp.i

CMakeFiles/Task9_full.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task9_full.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aleksandr/Documents/gitproj/Task9_full/main.cpp -o CMakeFiles/Task9_full.dir/main.cpp.s

# Object files for target Task9_full
Task9_full_OBJECTS = \
"CMakeFiles/Task9_full.dir/main.cpp.o"

# External object files for target Task9_full
Task9_full_EXTERNAL_OBJECTS =

Task9_full: CMakeFiles/Task9_full.dir/main.cpp.o
Task9_full: CMakeFiles/Task9_full.dir/build.make
Task9_full: CMakeFiles/Task9_full.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aleksandr/Documents/gitproj/Task9_full/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task9_full"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task9_full.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task9_full.dir/build: Task9_full

.PHONY : CMakeFiles/Task9_full.dir/build

CMakeFiles/Task9_full.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task9_full.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task9_full.dir/clean

CMakeFiles/Task9_full.dir/depend:
	cd /home/aleksandr/Documents/gitproj/Task9_full/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aleksandr/Documents/gitproj/Task9_full /home/aleksandr/Documents/gitproj/Task9_full /home/aleksandr/Documents/gitproj/Task9_full/cmake-build-debug /home/aleksandr/Documents/gitproj/Task9_full/cmake-build-debug /home/aleksandr/Documents/gitproj/Task9_full/cmake-build-debug/CMakeFiles/Task9_full.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Task9_full.dir/depend
