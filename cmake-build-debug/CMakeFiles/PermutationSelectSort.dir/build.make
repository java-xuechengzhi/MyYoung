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
include CMakeFiles/PermutationSelectSort.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/PermutationSelectSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PermutationSelectSort.dir/flags.make

CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.obj: CMakeFiles/PermutationSelectSort.dir/flags.make
CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.obj: ../Sort/PermutationSelectSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.obj"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PermutationSelectSort.dir\Sort\PermutationSelectSort.cpp.obj -c E:\Cpp\KaoYan\Sort\PermutationSelectSort.cpp

CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.i"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp\KaoYan\Sort\PermutationSelectSort.cpp > CMakeFiles\PermutationSelectSort.dir\Sort\PermutationSelectSort.cpp.i

CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.s"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp\KaoYan\Sort\PermutationSelectSort.cpp -o CMakeFiles\PermutationSelectSort.dir\Sort\PermutationSelectSort.cpp.s

# Object files for target PermutationSelectSort
PermutationSelectSort_OBJECTS = \
"CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.obj"

# External object files for target PermutationSelectSort
PermutationSelectSort_EXTERNAL_OBJECTS =

PermutationSelectSort.exe: CMakeFiles/PermutationSelectSort.dir/Sort/PermutationSelectSort.cpp.obj
PermutationSelectSort.exe: CMakeFiles/PermutationSelectSort.dir/build.make
PermutationSelectSort.exe: CMakeFiles/PermutationSelectSort.dir/linklibs.rsp
PermutationSelectSort.exe: CMakeFiles/PermutationSelectSort.dir/objects1.rsp
PermutationSelectSort.exe: CMakeFiles/PermutationSelectSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PermutationSelectSort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PermutationSelectSort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PermutationSelectSort.dir/build: PermutationSelectSort.exe
.PHONY : CMakeFiles/PermutationSelectSort.dir/build

CMakeFiles/PermutationSelectSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PermutationSelectSort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PermutationSelectSort.dir/clean

CMakeFiles/PermutationSelectSort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\PermutationSelectSort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PermutationSelectSort.dir/depend

