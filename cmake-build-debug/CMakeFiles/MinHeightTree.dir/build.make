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
include CMakeFiles/MinHeightTree.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/MinHeightTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MinHeightTree.dir/flags.make

CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.obj: CMakeFiles/MinHeightTree.dir/flags.make
CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.obj: ../Tree/MinHeightTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.obj"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MinHeightTree.dir\Tree\MinHeightTree.cpp.obj -c E:\Cpp\KaoYan\Tree\MinHeightTree.cpp

CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.i"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp\KaoYan\Tree\MinHeightTree.cpp > CMakeFiles\MinHeightTree.dir\Tree\MinHeightTree.cpp.i

CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.s"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp\KaoYan\Tree\MinHeightTree.cpp -o CMakeFiles\MinHeightTree.dir\Tree\MinHeightTree.cpp.s

# Object files for target MinHeightTree
MinHeightTree_OBJECTS = \
"CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.obj"

# External object files for target MinHeightTree
MinHeightTree_EXTERNAL_OBJECTS =

MinHeightTree.exe: CMakeFiles/MinHeightTree.dir/Tree/MinHeightTree.cpp.obj
MinHeightTree.exe: CMakeFiles/MinHeightTree.dir/build.make
MinHeightTree.exe: CMakeFiles/MinHeightTree.dir/linklibs.rsp
MinHeightTree.exe: CMakeFiles/MinHeightTree.dir/objects1.rsp
MinHeightTree.exe: CMakeFiles/MinHeightTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MinHeightTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MinHeightTree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MinHeightTree.dir/build: MinHeightTree.exe
.PHONY : CMakeFiles/MinHeightTree.dir/build

CMakeFiles/MinHeightTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MinHeightTree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MinHeightTree.dir/clean

CMakeFiles/MinHeightTree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\MinHeightTree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MinHeightTree.dir/depend

