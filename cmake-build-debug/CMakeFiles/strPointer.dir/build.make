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
include CMakeFiles/strPointer.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/strPointer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strPointer.dir/flags.make

CMakeFiles/strPointer.dir/C/strPointer.c.obj: CMakeFiles/strPointer.dir/flags.make
CMakeFiles/strPointer.dir/C/strPointer.c.obj: ../C/strPointer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/strPointer.dir/C/strPointer.c.obj"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\strPointer.dir\C\strPointer.c.obj -c E:\Cpp\KaoYan\C\strPointer.c

CMakeFiles/strPointer.dir/C/strPointer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/strPointer.dir/C/strPointer.c.i"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Cpp\KaoYan\C\strPointer.c > CMakeFiles\strPointer.dir\C\strPointer.c.i

CMakeFiles/strPointer.dir/C/strPointer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/strPointer.dir/C/strPointer.c.s"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Cpp\KaoYan\C\strPointer.c -o CMakeFiles\strPointer.dir\C\strPointer.c.s

# Object files for target strPointer
strPointer_OBJECTS = \
"CMakeFiles/strPointer.dir/C/strPointer.c.obj"

# External object files for target strPointer
strPointer_EXTERNAL_OBJECTS =

strPointer.exe: CMakeFiles/strPointer.dir/C/strPointer.c.obj
strPointer.exe: CMakeFiles/strPointer.dir/build.make
strPointer.exe: CMakeFiles/strPointer.dir/linklibs.rsp
strPointer.exe: CMakeFiles/strPointer.dir/objects1.rsp
strPointer.exe: CMakeFiles/strPointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable strPointer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\strPointer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strPointer.dir/build: strPointer.exe
.PHONY : CMakeFiles/strPointer.dir/build

CMakeFiles/strPointer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\strPointer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/strPointer.dir/clean

CMakeFiles/strPointer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\strPointer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strPointer.dir/depend

