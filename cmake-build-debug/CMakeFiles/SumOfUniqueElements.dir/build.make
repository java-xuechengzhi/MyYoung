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
include CMakeFiles/SumOfUniqueElements.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SumOfUniqueElements.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SumOfUniqueElements.dir/flags.make

CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.obj: CMakeFiles/SumOfUniqueElements.dir/flags.make
CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.obj: ../Array/SumOfUniqueElements.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.obj"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SumOfUniqueElements.dir\Array\SumOfUniqueElements.cpp.obj -c E:\Cpp\KaoYan\Array\SumOfUniqueElements.cpp

CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.i"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp\KaoYan\Array\SumOfUniqueElements.cpp > CMakeFiles\SumOfUniqueElements.dir\Array\SumOfUniqueElements.cpp.i

CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.s"
	D:\environment\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp\KaoYan\Array\SumOfUniqueElements.cpp -o CMakeFiles\SumOfUniqueElements.dir\Array\SumOfUniqueElements.cpp.s

# Object files for target SumOfUniqueElements
SumOfUniqueElements_OBJECTS = \
"CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.obj"

# External object files for target SumOfUniqueElements
SumOfUniqueElements_EXTERNAL_OBJECTS =

SumOfUniqueElements.exe: CMakeFiles/SumOfUniqueElements.dir/Array/SumOfUniqueElements.cpp.obj
SumOfUniqueElements.exe: CMakeFiles/SumOfUniqueElements.dir/build.make
SumOfUniqueElements.exe: CMakeFiles/SumOfUniqueElements.dir/linklibs.rsp
SumOfUniqueElements.exe: CMakeFiles/SumOfUniqueElements.dir/objects1.rsp
SumOfUniqueElements.exe: CMakeFiles/SumOfUniqueElements.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SumOfUniqueElements.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SumOfUniqueElements.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SumOfUniqueElements.dir/build: SumOfUniqueElements.exe

.PHONY : CMakeFiles/SumOfUniqueElements.dir/build

CMakeFiles/SumOfUniqueElements.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SumOfUniqueElements.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SumOfUniqueElements.dir/clean

CMakeFiles/SumOfUniqueElements.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\KaoYan E:\Cpp\KaoYan E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug E:\Cpp\KaoYan\cmake-build-debug\CMakeFiles\SumOfUniqueElements.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SumOfUniqueElements.dir/depend

