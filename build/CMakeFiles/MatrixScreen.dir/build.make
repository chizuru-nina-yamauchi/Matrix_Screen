# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dci-student/CLionProjects/Matrix_Screen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dci-student/CLionProjects/Matrix_Screen/build

# Include any dependencies generated for this target.
include CMakeFiles/MatrixScreen.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MatrixScreen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MatrixScreen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MatrixScreen.dir/flags.make

CMakeFiles/MatrixScreen.dir/src/main.cpp.o: CMakeFiles/MatrixScreen.dir/flags.make
CMakeFiles/MatrixScreen.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/MatrixScreen.dir/src/main.cpp.o: CMakeFiles/MatrixScreen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dci-student/CLionProjects/Matrix_Screen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MatrixScreen.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MatrixScreen.dir/src/main.cpp.o -MF CMakeFiles/MatrixScreen.dir/src/main.cpp.o.d -o CMakeFiles/MatrixScreen.dir/src/main.cpp.o -c /home/dci-student/CLionProjects/Matrix_Screen/src/main.cpp

CMakeFiles/MatrixScreen.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MatrixScreen.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dci-student/CLionProjects/Matrix_Screen/src/main.cpp > CMakeFiles/MatrixScreen.dir/src/main.cpp.i

CMakeFiles/MatrixScreen.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MatrixScreen.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dci-student/CLionProjects/Matrix_Screen/src/main.cpp -o CMakeFiles/MatrixScreen.dir/src/main.cpp.s

# Object files for target MatrixScreen
MatrixScreen_OBJECTS = \
"CMakeFiles/MatrixScreen.dir/src/main.cpp.o"

# External object files for target MatrixScreen
MatrixScreen_EXTERNAL_OBJECTS =

MatrixScreen: CMakeFiles/MatrixScreen.dir/src/main.cpp.o
MatrixScreen: CMakeFiles/MatrixScreen.dir/build.make
MatrixScreen: /usr/lib/x86_64-linux-gnu/libSDL2.so
MatrixScreen: /usr/lib/x86_64-linux-gnu/libSDL2_ttf.so
MatrixScreen: CMakeFiles/MatrixScreen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dci-student/CLionProjects/Matrix_Screen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MatrixScreen"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MatrixScreen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MatrixScreen.dir/build: MatrixScreen
.PHONY : CMakeFiles/MatrixScreen.dir/build

CMakeFiles/MatrixScreen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MatrixScreen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MatrixScreen.dir/clean

CMakeFiles/MatrixScreen.dir/depend:
	cd /home/dci-student/CLionProjects/Matrix_Screen/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dci-student/CLionProjects/Matrix_Screen /home/dci-student/CLionProjects/Matrix_Screen /home/dci-student/CLionProjects/Matrix_Screen/build /home/dci-student/CLionProjects/Matrix_Screen/build /home/dci-student/CLionProjects/Matrix_Screen/build/CMakeFiles/MatrixScreen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MatrixScreen.dir/depend
