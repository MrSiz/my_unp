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
CMAKE_SOURCE_DIR = /home/mrsiz/source_code/my_unp/names

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mrsiz/source_code/my_unp/names

# Include any dependencies generated for this target.
include CMakeFiles/out_daytimetcpsrv2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/out_daytimetcpsrv2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/out_daytimetcpsrv2.dir/flags.make

CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o: CMakeFiles/out_daytimetcpsrv2.dir/flags.make
CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o: daytimetcpsrv2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrsiz/source_code/my_unp/names/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o   -c /home/mrsiz/source_code/my_unp/names/daytimetcpsrv2.c

CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mrsiz/source_code/my_unp/names/daytimetcpsrv2.c > CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.i

CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mrsiz/source_code/my_unp/names/daytimetcpsrv2.c -o CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.s

CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o.requires:

.PHONY : CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o.requires

CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o.provides: CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o.requires
	$(MAKE) -f CMakeFiles/out_daytimetcpsrv2.dir/build.make CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o.provides.build
.PHONY : CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o.provides

CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o.provides.build: CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o


# Object files for target out_daytimetcpsrv2
out_daytimetcpsrv2_OBJECTS = \
"CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o"

# External object files for target out_daytimetcpsrv2
out_daytimetcpsrv2_EXTERNAL_OBJECTS =

out_daytimetcpsrv2: CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o
out_daytimetcpsrv2: CMakeFiles/out_daytimetcpsrv2.dir/build.make
out_daytimetcpsrv2: CMakeFiles/out_daytimetcpsrv2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mrsiz/source_code/my_unp/names/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable out_daytimetcpsrv2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/out_daytimetcpsrv2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/out_daytimetcpsrv2.dir/build: out_daytimetcpsrv2

.PHONY : CMakeFiles/out_daytimetcpsrv2.dir/build

CMakeFiles/out_daytimetcpsrv2.dir/requires: CMakeFiles/out_daytimetcpsrv2.dir/daytimetcpsrv2.c.o.requires

.PHONY : CMakeFiles/out_daytimetcpsrv2.dir/requires

CMakeFiles/out_daytimetcpsrv2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/out_daytimetcpsrv2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/out_daytimetcpsrv2.dir/clean

CMakeFiles/out_daytimetcpsrv2.dir/depend:
	cd /home/mrsiz/source_code/my_unp/names && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mrsiz/source_code/my_unp/names /home/mrsiz/source_code/my_unp/names /home/mrsiz/source_code/my_unp/names /home/mrsiz/source_code/my_unp/names /home/mrsiz/source_code/my_unp/names/CMakeFiles/out_daytimetcpsrv2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/out_daytimetcpsrv2.dir/depend

