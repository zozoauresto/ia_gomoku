# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\53269\CLionProjects\gomuko

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\53269\CLionProjects\gomuko\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pbrain-gomuko.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pbrain-gomuko.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pbrain-gomuko.dir/flags.make

CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj: CMakeFiles/pbrain-gomuko.dir/flags.make
CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\53269\CLionProjects\gomuko\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pbrain-gomuko.dir\src\main.cpp.obj -c C:\Users\53269\CLionProjects\gomuko\src\main.cpp

CMakeFiles/pbrain-gomuko.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pbrain-gomuko.dir/src/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\53269\CLionProjects\gomuko\src\main.cpp > CMakeFiles\pbrain-gomuko.dir\src\main.cpp.i

CMakeFiles/pbrain-gomuko.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pbrain-gomuko.dir/src/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\53269\CLionProjects\gomuko\src\main.cpp -o CMakeFiles\pbrain-gomuko.dir\src\main.cpp.s

CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj.requires:

.PHONY : CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj.requires

CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj.provides: CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\pbrain-gomuko.dir\build.make CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj.provides.build
.PHONY : CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj.provides

CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj.provides.build: CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj


CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj: CMakeFiles/pbrain-gomuko.dir/flags.make
CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj: ../src/ai/GomukoAi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\53269\CLionProjects\gomuko\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pbrain-gomuko.dir\src\ai\GomukoAi.cpp.obj -c C:\Users\53269\CLionProjects\gomuko\src\ai\GomukoAi.cpp

CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\53269\CLionProjects\gomuko\src\ai\GomukoAi.cpp > CMakeFiles\pbrain-gomuko.dir\src\ai\GomukoAi.cpp.i

CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\53269\CLionProjects\gomuko\src\ai\GomukoAi.cpp -o CMakeFiles\pbrain-gomuko.dir\src\ai\GomukoAi.cpp.s

CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj.requires:

.PHONY : CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj.requires

CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj.provides: CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj.requires
	$(MAKE) -f CMakeFiles\pbrain-gomuko.dir\build.make CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj.provides.build
.PHONY : CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj.provides

CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj.provides.build: CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj


# Object files for target pbrain-gomuko
pbrain__gomuko_OBJECTS = \
"CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj" \
"CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj"

# External object files for target pbrain-gomuko
pbrain__gomuko_EXTERNAL_OBJECTS =

../build/pbrain-gomuko.exe: CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj
../build/pbrain-gomuko.exe: CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj
../build/pbrain-gomuko.exe: CMakeFiles/pbrain-gomuko.dir/build.make
../build/pbrain-gomuko.exe: CMakeFiles/pbrain-gomuko.dir/linklibs.rsp
../build/pbrain-gomuko.exe: CMakeFiles/pbrain-gomuko.dir/objects1.rsp
../build/pbrain-gomuko.exe: CMakeFiles/pbrain-gomuko.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\53269\CLionProjects\gomuko\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ..\build\pbrain-gomuko.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pbrain-gomuko.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pbrain-gomuko.dir/build: ../build/pbrain-gomuko.exe

.PHONY : CMakeFiles/pbrain-gomuko.dir/build

CMakeFiles/pbrain-gomuko.dir/requires: CMakeFiles/pbrain-gomuko.dir/src/main.cpp.obj.requires
CMakeFiles/pbrain-gomuko.dir/requires: CMakeFiles/pbrain-gomuko.dir/src/ai/GomukoAi.cpp.obj.requires

.PHONY : CMakeFiles/pbrain-gomuko.dir/requires

CMakeFiles/pbrain-gomuko.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pbrain-gomuko.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pbrain-gomuko.dir/clean

CMakeFiles/pbrain-gomuko.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\53269\CLionProjects\gomuko C:\Users\53269\CLionProjects\gomuko C:\Users\53269\CLionProjects\gomuko\cmake-build-debug C:\Users\53269\CLionProjects\gomuko\cmake-build-debug C:\Users\53269\CLionProjects\gomuko\cmake-build-debug\CMakeFiles\pbrain-gomuko.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pbrain-gomuko.dir/depend

