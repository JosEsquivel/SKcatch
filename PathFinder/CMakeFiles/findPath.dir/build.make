# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jose/Documents/skycatch/PathFinder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Documents/skycatch/PathFinder

# Include any dependencies generated for this target.
include CMakeFiles/findPath.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/findPath.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/findPath.dir/flags.make

CMakeFiles/findPath.dir/src/main.cpp.o: CMakeFiles/findPath.dir/flags.make
CMakeFiles/findPath.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Documents/skycatch/PathFinder/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/findPath.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/findPath.dir/src/main.cpp.o -c /home/jose/Documents/skycatch/PathFinder/src/main.cpp

CMakeFiles/findPath.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/findPath.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Documents/skycatch/PathFinder/src/main.cpp > CMakeFiles/findPath.dir/src/main.cpp.i

CMakeFiles/findPath.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/findPath.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Documents/skycatch/PathFinder/src/main.cpp -o CMakeFiles/findPath.dir/src/main.cpp.s

CMakeFiles/findPath.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/findPath.dir/src/main.cpp.o.requires

CMakeFiles/findPath.dir/src/main.cpp.o.provides: CMakeFiles/findPath.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/findPath.dir/build.make CMakeFiles/findPath.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/findPath.dir/src/main.cpp.o.provides

CMakeFiles/findPath.dir/src/main.cpp.o.provides.build: CMakeFiles/findPath.dir/src/main.cpp.o


# Object files for target findPath
findPath_OBJECTS = \
"CMakeFiles/findPath.dir/src/main.cpp.o"

# External object files for target findPath
findPath_EXTERNAL_OBJECTS =

findPath: CMakeFiles/findPath.dir/src/main.cpp.o
findPath: CMakeFiles/findPath.dir/build.make
findPath: CMakeFiles/findPath.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Documents/skycatch/PathFinder/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable findPath"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/findPath.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/findPath.dir/build: findPath

.PHONY : CMakeFiles/findPath.dir/build

CMakeFiles/findPath.dir/requires: CMakeFiles/findPath.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/findPath.dir/requires

CMakeFiles/findPath.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/findPath.dir/cmake_clean.cmake
.PHONY : CMakeFiles/findPath.dir/clean

CMakeFiles/findPath.dir/depend:
	cd /home/jose/Documents/skycatch/PathFinder && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Documents/skycatch/PathFinder /home/jose/Documents/skycatch/PathFinder /home/jose/Documents/skycatch/PathFinder /home/jose/Documents/skycatch/PathFinder /home/jose/Documents/skycatch/PathFinder/CMakeFiles/findPath.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/findPath.dir/depend

