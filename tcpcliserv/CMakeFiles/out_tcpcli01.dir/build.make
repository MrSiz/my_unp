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
CMAKE_SOURCE_DIR = /home/mrsiz/source_code/my_unp/tcpcliserv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mrsiz/source_code/my_unp/tcpcliserv

# Include any dependencies generated for this target.
include CMakeFiles/out_tcpcli01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/out_tcpcli01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/out_tcpcli01.dir/flags.make

CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o: CMakeFiles/out_tcpcli01.dir/flags.make
CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o: tcpcli01.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mrsiz/source_code/my_unp/tcpcliserv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o   -c /home/mrsiz/source_code/my_unp/tcpcliserv/tcpcli01.c

CMakeFiles/out_tcpcli01.dir/tcpcli01.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/out_tcpcli01.dir/tcpcli01.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mrsiz/source_code/my_unp/tcpcliserv/tcpcli01.c > CMakeFiles/out_tcpcli01.dir/tcpcli01.c.i

CMakeFiles/out_tcpcli01.dir/tcpcli01.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/out_tcpcli01.dir/tcpcli01.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mrsiz/source_code/my_unp/tcpcliserv/tcpcli01.c -o CMakeFiles/out_tcpcli01.dir/tcpcli01.c.s

CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o.requires:

.PHONY : CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o.requires

CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o.provides: CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o.requires
	$(MAKE) -f CMakeFiles/out_tcpcli01.dir/build.make CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o.provides.build
.PHONY : CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o.provides

CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o.provides.build: CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o


# Object files for target out_tcpcli01
out_tcpcli01_OBJECTS = \
"CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o"

# External object files for target out_tcpcli01
out_tcpcli01_EXTERNAL_OBJECTS =

out_tcpcli01: CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o
out_tcpcli01: CMakeFiles/out_tcpcli01.dir/build.make
out_tcpcli01: CMakeFiles/out_tcpcli01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mrsiz/source_code/my_unp/tcpcliserv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable out_tcpcli01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/out_tcpcli01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/out_tcpcli01.dir/build: out_tcpcli01

.PHONY : CMakeFiles/out_tcpcli01.dir/build

CMakeFiles/out_tcpcli01.dir/requires: CMakeFiles/out_tcpcli01.dir/tcpcli01.c.o.requires

.PHONY : CMakeFiles/out_tcpcli01.dir/requires

CMakeFiles/out_tcpcli01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/out_tcpcli01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/out_tcpcli01.dir/clean

CMakeFiles/out_tcpcli01.dir/depend:
	cd /home/mrsiz/source_code/my_unp/tcpcliserv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mrsiz/source_code/my_unp/tcpcliserv /home/mrsiz/source_code/my_unp/tcpcliserv /home/mrsiz/source_code/my_unp/tcpcliserv /home/mrsiz/source_code/my_unp/tcpcliserv /home/mrsiz/source_code/my_unp/tcpcliserv/CMakeFiles/out_tcpcli01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/out_tcpcli01.dir/depend

