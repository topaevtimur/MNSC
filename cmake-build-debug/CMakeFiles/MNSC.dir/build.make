# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maria/ITMO/MNSC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maria/ITMO/MNSC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MNSC.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MNSC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MNSC.dir/flags.make

CMakeFiles/MNSC.dir/main.cpp.o: CMakeFiles/MNSC.dir/flags.make
CMakeFiles/MNSC.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maria/ITMO/MNSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MNSC.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MNSC.dir/main.cpp.o -c /home/maria/ITMO/MNSC/main.cpp

CMakeFiles/MNSC.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MNSC.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maria/ITMO/MNSC/main.cpp > CMakeFiles/MNSC.dir/main.cpp.i

CMakeFiles/MNSC.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MNSC.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maria/ITMO/MNSC/main.cpp -o CMakeFiles/MNSC.dir/main.cpp.s

CMakeFiles/MNSC.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/MNSC.dir/main.cpp.o.requires

CMakeFiles/MNSC.dir/main.cpp.o.provides: CMakeFiles/MNSC.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/MNSC.dir/build.make CMakeFiles/MNSC.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/MNSC.dir/main.cpp.o.provides

CMakeFiles/MNSC.dir/main.cpp.o.provides.build: CMakeFiles/MNSC.dir/main.cpp.o


# Object files for target MNSC
MNSC_OBJECTS = \
"CMakeFiles/MNSC.dir/main.cpp.o"

# External object files for target MNSC
MNSC_EXTERNAL_OBJECTS =

MNSC: CMakeFiles/MNSC.dir/main.cpp.o
MNSC: CMakeFiles/MNSC.dir/build.make
MNSC: simple_iteration/libsimple_iteration.a
MNSC: CMakeFiles/MNSC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maria/ITMO/MNSC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MNSC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MNSC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MNSC.dir/build: MNSC

.PHONY : CMakeFiles/MNSC.dir/build

CMakeFiles/MNSC.dir/requires: CMakeFiles/MNSC.dir/main.cpp.o.requires

.PHONY : CMakeFiles/MNSC.dir/requires

CMakeFiles/MNSC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MNSC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MNSC.dir/clean

CMakeFiles/MNSC.dir/depend:
	cd /home/maria/ITMO/MNSC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maria/ITMO/MNSC /home/maria/ITMO/MNSC /home/maria/ITMO/MNSC/cmake-build-debug /home/maria/ITMO/MNSC/cmake-build-debug /home/maria/ITMO/MNSC/cmake-build-debug/CMakeFiles/MNSC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MNSC.dir/depend

