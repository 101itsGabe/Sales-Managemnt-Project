# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/gabe/Desktop/Clion Output/NathanPatty"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/gabe/Desktop/Clion Output/NathanPatty/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/NathanPatty.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NathanPatty.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NathanPatty.dir/flags.make

CMakeFiles/NathanPatty.dir/main.cpp.o: CMakeFiles/NathanPatty.dir/flags.make
CMakeFiles/NathanPatty.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gabe/Desktop/Clion Output/NathanPatty/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NathanPatty.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NathanPatty.dir/main.cpp.o -c "/Users/gabe/Desktop/Clion Output/NathanPatty/main.cpp"

CMakeFiles/NathanPatty.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NathanPatty.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gabe/Desktop/Clion Output/NathanPatty/main.cpp" > CMakeFiles/NathanPatty.dir/main.cpp.i

CMakeFiles/NathanPatty.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NathanPatty.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gabe/Desktop/Clion Output/NathanPatty/main.cpp" -o CMakeFiles/NathanPatty.dir/main.cpp.s

# Object files for target NathanPatty
NathanPatty_OBJECTS = \
"CMakeFiles/NathanPatty.dir/main.cpp.o"

# External object files for target NathanPatty
NathanPatty_EXTERNAL_OBJECTS =

NathanPatty: CMakeFiles/NathanPatty.dir/main.cpp.o
NathanPatty: CMakeFiles/NathanPatty.dir/build.make
NathanPatty: CMakeFiles/NathanPatty.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gabe/Desktop/Clion Output/NathanPatty/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NathanPatty"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NathanPatty.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NathanPatty.dir/build: NathanPatty

.PHONY : CMakeFiles/NathanPatty.dir/build

CMakeFiles/NathanPatty.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NathanPatty.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NathanPatty.dir/clean

CMakeFiles/NathanPatty.dir/depend:
	cd "/Users/gabe/Desktop/Clion Output/NathanPatty/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gabe/Desktop/Clion Output/NathanPatty" "/Users/gabe/Desktop/Clion Output/NathanPatty" "/Users/gabe/Desktop/Clion Output/NathanPatty/cmake-build-debug" "/Users/gabe/Desktop/Clion Output/NathanPatty/cmake-build-debug" "/Users/gabe/Desktop/Clion Output/NathanPatty/cmake-build-debug/CMakeFiles/NathanPatty.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/NathanPatty.dir/depend

