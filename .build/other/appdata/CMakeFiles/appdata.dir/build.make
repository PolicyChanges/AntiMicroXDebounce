# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/architect/dev/test/antimicrox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/architect/dev/test/antimicrox/.build

# Utility rule file for appdata.

# Include any custom commands dependencies for this target.
include other/appdata/CMakeFiles/appdata.dir/compiler_depend.make

# Include the progress variables for this target.
include other/appdata/CMakeFiles/appdata.dir/progress.make

appdata: other/appdata/CMakeFiles/appdata.dir/build.make
	cd /home/architect/dev/test/antimicrox/.build/other/appdata && msgfmt /home/architect/dev/test/antimicrox/other/appdata/PO_files/en.po -o /home/architect/dev/test/antimicrox/.build/other/appdata/PO_files/en.mo
	cd /home/architect/dev/test/antimicrox/.build/other/appdata && itstool -i /home/architect/dev/test/antimicrox/other/appdata/appdata.its -j /home/architect/dev/test/antimicrox/other/appdata/io.github.antimicrox.antimicrox.appdata.xml.in -o io.github.antimicrox.antimicrox.appdata.xml /home/architect/dev/test/antimicrox/.build/other/appdata/PO_files/*.mo
.PHONY : appdata

# Rule to build all files generated by this target.
other/appdata/CMakeFiles/appdata.dir/build: appdata
.PHONY : other/appdata/CMakeFiles/appdata.dir/build

other/appdata/CMakeFiles/appdata.dir/clean:
	cd /home/architect/dev/test/antimicrox/.build/other/appdata && $(CMAKE_COMMAND) -P CMakeFiles/appdata.dir/cmake_clean.cmake
.PHONY : other/appdata/CMakeFiles/appdata.dir/clean

other/appdata/CMakeFiles/appdata.dir/depend:
	cd /home/architect/dev/test/antimicrox/.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/architect/dev/test/antimicrox /home/architect/dev/test/antimicrox/other/appdata /home/architect/dev/test/antimicrox/.build /home/architect/dev/test/antimicrox/.build/other/appdata /home/architect/dev/test/antimicrox/.build/other/appdata/CMakeFiles/appdata.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : other/appdata/CMakeFiles/appdata.dir/depend

