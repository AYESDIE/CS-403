# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Codes\GitHub\CS-403

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Codes\GitHub\CS-403\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab0_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab0_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab0_4.dir/flags.make

CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj: CMakeFiles/lab0_4.dir/flags.make
CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj: ../Lab-0/lab0_4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Codes\GitHub\CS-403\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab0_4.dir\Lab-0\lab0_4.cpp.obj -c D:\Codes\GitHub\CS-403\Lab-0\lab0_4.cpp

CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Codes\GitHub\CS-403\Lab-0\lab0_4.cpp > CMakeFiles\lab0_4.dir\Lab-0\lab0_4.cpp.i

CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Codes\GitHub\CS-403\Lab-0\lab0_4.cpp -o CMakeFiles\lab0_4.dir\Lab-0\lab0_4.cpp.s

CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj.requires:

.PHONY : CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj.requires

CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj.provides: CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj.requires
	$(MAKE) -f CMakeFiles\lab0_4.dir\build.make CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj.provides.build
.PHONY : CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj.provides

CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj.provides.build: CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj


# Object files for target lab0_4
lab0_4_OBJECTS = \
"CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj"

# External object files for target lab0_4
lab0_4_EXTERNAL_OBJECTS =

lab0_4.exe: CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj
lab0_4.exe: CMakeFiles/lab0_4.dir/build.make
lab0_4.exe: CMakeFiles/lab0_4.dir/linklibs.rsp
lab0_4.exe: CMakeFiles/lab0_4.dir/objects1.rsp
lab0_4.exe: CMakeFiles/lab0_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Codes\GitHub\CS-403\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab0_4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab0_4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab0_4.dir/build: lab0_4.exe

.PHONY : CMakeFiles/lab0_4.dir/build

CMakeFiles/lab0_4.dir/requires: CMakeFiles/lab0_4.dir/Lab-0/lab0_4.cpp.obj.requires

.PHONY : CMakeFiles/lab0_4.dir/requires

CMakeFiles/lab0_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab0_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab0_4.dir/clean

CMakeFiles/lab0_4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Codes\GitHub\CS-403 D:\Codes\GitHub\CS-403 D:\Codes\GitHub\CS-403\cmake-build-debug D:\Codes\GitHub\CS-403\cmake-build-debug D:\Codes\GitHub\CS-403\cmake-build-debug\CMakeFiles\lab0_4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab0_4.dir/depend

