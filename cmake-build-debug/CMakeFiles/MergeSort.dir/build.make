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
include CMakeFiles/MergeSort.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/MergeSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MergeSort.dir/flags.make

CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.obj: CMakeFiles/MergeSort.dir/flags.make
CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.obj: ../Sort/MergeSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.obj"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MergeSort.dir\Sort\MergeSort.cpp.obj -c E:\Cpp\KaoYan\Sort\MergeSort.cpp

CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.i"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp\KaoYan\Sort\MergeSort.cpp > CMakeFiles\MergeSort.dir\Sort\MergeSort.cpp.i

CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.s"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp\KaoYan\Sort\MergeSort.cpp -o CMakeFiles\MergeSort.dir\Sort\MergeSort.cpp.s

# Object files for target MergeSort
MergeSort_OBJECTS = \
"CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.obj"

# External object files for target MergeSort
MergeSort_EXTERNAL_OBJECTS =

MergeSort.exe: CMakeFiles/MergeSort.dir/Sort/MergeSort.cpp.obj
MergeSort.exe: CMakeFiles/MergeSort.dir/build.make
MergeSort.exe: CMakeFiles/MergeSort.dir/linklibs.rsp
MergeSort.exe: CMakeFiles/MergeSort.dir/objects1.rsp
MergeSort.exe: CMakeFiles/MergeSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MergeSort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MergeSort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MergeSort.dir/build: MergeSort.exe
.PHONY : CMakeFiles/MergeSort.dir/build

CMakeFiles/MergeSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MergeSort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MergeSort.dir/clean

CMakeFiles/MergeSort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\MergeSort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MergeSort.dir/depend

