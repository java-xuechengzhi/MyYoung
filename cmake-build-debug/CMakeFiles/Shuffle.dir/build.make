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
include CMakeFiles/Shuffle.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Shuffle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Shuffle.dir/flags.make

CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.obj: CMakeFiles/Shuffle.dir/flags.make
CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.obj: ../Sort/Shuffle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.obj"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Shuffle.dir\Sort\Shuffle.cpp.obj -c E:\Cpp\KaoYan\Sort\Shuffle.cpp

CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.i"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp\KaoYan\Sort\Shuffle.cpp > CMakeFiles\Shuffle.dir\Sort\Shuffle.cpp.i

CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.s"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp\KaoYan\Sort\Shuffle.cpp -o CMakeFiles\Shuffle.dir\Sort\Shuffle.cpp.s

# Object files for target Shuffle
Shuffle_OBJECTS = \
"CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.obj"

# External object files for target Shuffle
Shuffle_EXTERNAL_OBJECTS =

Shuffle.exe: CMakeFiles/Shuffle.dir/Sort/Shuffle.cpp.obj
Shuffle.exe: CMakeFiles/Shuffle.dir/build.make
Shuffle.exe: CMakeFiles/Shuffle.dir/linklibs.rsp
Shuffle.exe: CMakeFiles/Shuffle.dir/objects1.rsp
Shuffle.exe: CMakeFiles/Shuffle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Shuffle.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Shuffle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Shuffle.dir/build: Shuffle.exe
.PHONY : CMakeFiles/Shuffle.dir/build

CMakeFiles/Shuffle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Shuffle.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Shuffle.dir/clean

CMakeFiles/Shuffle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\Shuffle.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Shuffle.dir/depend

