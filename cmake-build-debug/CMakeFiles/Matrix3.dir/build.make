# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
include CMakeFiles/Matrix3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Matrix3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Matrix3.dir/flags.make

CMakeFiles/Matrix3.dir/C/Matrix3.c.obj: CMakeFiles/Matrix3.dir/flags.make
CMakeFiles/Matrix3.dir/C/Matrix3.c.obj: ../C/Matrix3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Matrix3.dir/C/Matrix3.c.obj"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Matrix3.dir\C\Matrix3.c.obj -c E:\Cpp\KaoYan\C\Matrix3.c

CMakeFiles/Matrix3.dir/C/Matrix3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Matrix3.dir/C/Matrix3.c.i"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Cpp\KaoYan\C\Matrix3.c > CMakeFiles\Matrix3.dir\C\Matrix3.c.i

CMakeFiles/Matrix3.dir/C/Matrix3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Matrix3.dir/C/Matrix3.c.s"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Cpp\KaoYan\C\Matrix3.c -o CMakeFiles\Matrix3.dir\C\Matrix3.c.s

# Object files for target Matrix3
Matrix3_OBJECTS = \
"CMakeFiles/Matrix3.dir/C/Matrix3.c.obj"

# External object files for target Matrix3
Matrix3_EXTERNAL_OBJECTS =

Matrix3.exe: CMakeFiles/Matrix3.dir/C/Matrix3.c.obj
Matrix3.exe: CMakeFiles/Matrix3.dir/build.make
Matrix3.exe: CMakeFiles/Matrix3.dir/linklibs.rsp
Matrix3.exe: CMakeFiles/Matrix3.dir/objects1.rsp
Matrix3.exe: CMakeFiles/Matrix3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Matrix3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Matrix3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Matrix3.dir/build: Matrix3.exe

.PHONY : CMakeFiles/Matrix3.dir/build

CMakeFiles/Matrix3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Matrix3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Matrix3.dir/clean

CMakeFiles/Matrix3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\Matrix3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Matrix3.dir/depend

