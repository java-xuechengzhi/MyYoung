# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Cpp\KaoYan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Cpp\KaoYan\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/malloc.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/malloc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/malloc.dir/flags.make

CMakeFiles/malloc.dir/C/malloc.c.obj: CMakeFiles/malloc.dir/flags.make
CMakeFiles/malloc.dir/C/malloc.c.obj: ../C/malloc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/malloc.dir/C/malloc.c.obj"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\malloc.dir\C\malloc.c.obj -c E:\Cpp\KaoYan\C\malloc.c

CMakeFiles/malloc.dir/C/malloc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/malloc.dir/C/malloc.c.i"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Cpp\KaoYan\C\malloc.c > CMakeFiles\malloc.dir\C\malloc.c.i

CMakeFiles/malloc.dir/C/malloc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/malloc.dir/C/malloc.c.s"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Cpp\KaoYan\C\malloc.c -o CMakeFiles\malloc.dir\C\malloc.c.s

# Object files for target malloc
malloc_OBJECTS = \
"CMakeFiles/malloc.dir/C/malloc.c.obj"

# External object files for target malloc
malloc_EXTERNAL_OBJECTS =

malloc.exe: CMakeFiles/malloc.dir/C/malloc.c.obj
malloc.exe: CMakeFiles/malloc.dir/build.make
malloc.exe: CMakeFiles/malloc.dir/linklibs.rsp
malloc.exe: CMakeFiles/malloc.dir/objects1.rsp
malloc.exe: CMakeFiles/malloc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable malloc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\malloc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/malloc.dir/build: malloc.exe
.PHONY : CMakeFiles/malloc.dir/build

CMakeFiles/malloc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\malloc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/malloc.dir/clean

CMakeFiles/malloc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\malloc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/malloc.dir/depend

