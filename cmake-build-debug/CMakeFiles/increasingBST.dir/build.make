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
include CMakeFiles/increasingBST.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/increasingBST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/increasingBST.dir/flags.make

CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.obj: CMakeFiles/increasingBST.dir/flags.make
CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.obj: ../Tree/increasingBST.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.obj"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\increasingBST.dir\Tree\increasingBST.cpp.obj -c E:\Cpp\KaoYan\Tree\increasingBST.cpp

CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.i"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp\KaoYan\Tree\increasingBST.cpp > CMakeFiles\increasingBST.dir\Tree\increasingBST.cpp.i

CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.s"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp\KaoYan\Tree\increasingBST.cpp -o CMakeFiles\increasingBST.dir\Tree\increasingBST.cpp.s

# Object files for target increasingBST
increasingBST_OBJECTS = \
"CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.obj"

# External object files for target increasingBST
increasingBST_EXTERNAL_OBJECTS =

increasingBST.exe: CMakeFiles/increasingBST.dir/Tree/increasingBST.cpp.obj
increasingBST.exe: CMakeFiles/increasingBST.dir/build.make
increasingBST.exe: CMakeFiles/increasingBST.dir/linklibs.rsp
increasingBST.exe: CMakeFiles/increasingBST.dir/objects1.rsp
increasingBST.exe: CMakeFiles/increasingBST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable increasingBST.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\increasingBST.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/increasingBST.dir/build: increasingBST.exe

.PHONY : CMakeFiles/increasingBST.dir/build

CMakeFiles/increasingBST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\increasingBST.dir\cmake_clean.cmake
.PHONY : CMakeFiles/increasingBST.dir/clean

CMakeFiles/increasingBST.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\increasingBST.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/increasingBST.dir/depend

