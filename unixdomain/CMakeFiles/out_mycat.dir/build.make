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
CMAKE_SOURCE_DIR = /home/mrsiz/source_code/my_unp/unixdomain

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mrsiz/source_code/my_unp/unixdomain

# Include any dependencies generated for this target.
include CMakeFiles/out_mycat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/out_mycat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/out_mycat.dir/flags.make

CMakeFiles/out_mycat.dir/mycat.c.o: CMakeFiles/out_mycat.dir/flags.make
CMakeFiles/out_mycat.dir/mycat.c.o: mycat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrsiz/source_code/my_unp/unixdomain/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/out_mycat.dir/mycat.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/out_mycat.dir/mycat.c.o   -c /home/mrsiz/source_code/my_unp/unixdomain/mycat.c

CMakeFiles/out_mycat.dir/mycat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/out_mycat.dir/mycat.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mrsiz/source_code/my_unp/unixdomain/mycat.c > CMakeFiles/out_mycat.dir/mycat.c.i

CMakeFiles/out_mycat.dir/mycat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/out_mycat.dir/mycat.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mrsiz/source_code/my_unp/unixdomain/mycat.c -o CMakeFiles/out_mycat.dir/mycat.c.s

CMakeFiles/out_mycat.dir/mycat.c.o.requires:

.PHONY : CMakeFiles/out_mycat.dir/mycat.c.o.requires

CMakeFiles/out_mycat.dir/mycat.c.o.provides: CMakeFiles/out_mycat.dir/mycat.c.o.requires
	$(MAKE) -f CMakeFiles/out_mycat.dir/build.make CMakeFiles/out_mycat.dir/mycat.c.o.provides.build
.PHONY : CMakeFiles/out_mycat.dir/mycat.c.o.provides

CMakeFiles/out_mycat.dir/mycat.c.o.provides.build: CMakeFiles/out_mycat.dir/mycat.c.o


CMakeFiles/out_mycat.dir/myopen.c.o: CMakeFiles/out_mycat.dir/flags.make
CMakeFiles/out_mycat.dir/myopen.c.o: myopen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrsiz/source_code/my_unp/unixdomain/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/out_mycat.dir/myopen.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/out_mycat.dir/myopen.c.o   -c /home/mrsiz/source_code/my_unp/unixdomain/myopen.c

CMakeFiles/out_mycat.dir/myopen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/out_mycat.dir/myopen.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mrsiz/source_code/my_unp/unixdomain/myopen.c > CMakeFiles/out_mycat.dir/myopen.c.i

CMakeFiles/out_mycat.dir/myopen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/out_mycat.dir/myopen.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mrsiz/source_code/my_unp/unixdomain/myopen.c -o CMakeFiles/out_mycat.dir/myopen.c.s

CMakeFiles/out_mycat.dir/myopen.c.o.requires:

.PHONY : CMakeFiles/out_mycat.dir/myopen.c.o.requires

CMakeFiles/out_mycat.dir/myopen.c.o.provides: CMakeFiles/out_mycat.dir/myopen.c.o.requires
	$(MAKE) -f CMakeFiles/out_mycat.dir/build.make CMakeFiles/out_mycat.dir/myopen.c.o.provides.build
.PHONY : CMakeFiles/out_mycat.dir/myopen.c.o.provides

CMakeFiles/out_mycat.dir/myopen.c.o.provides.build: CMakeFiles/out_mycat.dir/myopen.c.o


# Object files for target out_mycat
out_mycat_OBJECTS = \
"CMakeFiles/out_mycat.dir/mycat.c.o" \
"CMakeFiles/out_mycat.dir/myopen.c.o"

# External object files for target out_mycat
out_mycat_EXTERNAL_OBJECTS =

out_mycat: CMakeFiles/out_mycat.dir/mycat.c.o
out_mycat: CMakeFiles/out_mycat.dir/myopen.c.o
out_mycat: CMakeFiles/out_mycat.dir/build.make
out_mycat: CMakeFiles/out_mycat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mrsiz/source_code/my_unp/unixdomain/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable out_mycat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/out_mycat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/out_mycat.dir/build: out_mycat

.PHONY : CMakeFiles/out_mycat.dir/build

CMakeFiles/out_mycat.dir/requires: CMakeFiles/out_mycat.dir/mycat.c.o.requires
CMakeFiles/out_mycat.dir/requires: CMakeFiles/out_mycat.dir/myopen.c.o.requires

.PHONY : CMakeFiles/out_mycat.dir/requires

CMakeFiles/out_mycat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/out_mycat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/out_mycat.dir/clean

CMakeFiles/out_mycat.dir/depend:
	cd /home/mrsiz/source_code/my_unp/unixdomain && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mrsiz/source_code/my_unp/unixdomain /home/mrsiz/source_code/my_unp/unixdomain /home/mrsiz/source_code/my_unp/unixdomain /home/mrsiz/source_code/my_unp/unixdomain /home/mrsiz/source_code/my_unp/unixdomain/CMakeFiles/out_mycat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/out_mycat.dir/depend

