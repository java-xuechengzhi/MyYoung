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
include CMakeFiles/strlen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/strlen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strlen.dir/flags.make

CMakeFiles/strlen.dir/C/strlen.c.obj: CMakeFiles/strlen.dir/flags.make
CMakeFiles/strlen.dir/C/strlen.c.obj: ../C/strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/strlen.dir/C/strlen.c.obj"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\strlen.dir\C\strlen.c.obj -c E:\Cpp\KaoYan\C\strlen.c

CMakeFiles/strlen.dir/C/strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/strlen.dir/C/strlen.c.i"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Cpp\KaoYan\C\strlen.c > CMakeFiles\strlen.dir\C\strlen.c.i

CMakeFiles/strlen.dir/C/strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/strlen.dir/C/strlen.c.s"
	D:\environment\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Cpp\KaoYan\C\strlen.c -o CMakeFiles\strlen.dir\C\strlen.c.s

# Object files for target strlen
strlen_OBJECTS = \
"CMakeFiles/strlen.dir/C/strlen.c.obj"

# External object files for target strlen
strlen_EXTERNAL_OBJECTS =

strlen.exe: CMakeFiles/strlen.dir/C/strlen.c.obj
strlen.exe: CMakeFiles/strlen.dir/build.make
strlen.exe: CMakeFiles/strlen.dir/linklibs.rsp
strlen.exe: CMakeFiles/strlen.dir/objects1.rsp
strlen.exe: CMakeFiles/strlen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable strlen.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\strlen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strlen.dir/build: strlen.exe

.PHONY : CMakeFiles/strlen.dir/build

CMakeFiles/strlen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\strlen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/strlen.dir/clean

CMakeFiles/strlen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\strlen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strlen.dir/depend

