# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "F:\clion\CLion 2017.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "F:\clion\CLion 2017.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\program\C\dataStructure\queque\SequenceStore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\program\C\dataStructure\queque\SequenceStore\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SequenceStore.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SequenceStore.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SequenceStore.dir/flags.make

CMakeFiles/SequenceStore.dir/main.c.obj: CMakeFiles/SequenceStore.dir/flags.make
CMakeFiles/SequenceStore.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\program\C\dataStructure\queque\SequenceStore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SequenceStore.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SequenceStore.dir\main.c.obj   -c F:\program\C\dataStructure\queque\SequenceStore\main.c

CMakeFiles/SequenceStore.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SequenceStore.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\program\C\dataStructure\queque\SequenceStore\main.c > CMakeFiles\SequenceStore.dir\main.c.i

CMakeFiles/SequenceStore.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SequenceStore.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\program\C\dataStructure\queque\SequenceStore\main.c -o CMakeFiles\SequenceStore.dir\main.c.s

CMakeFiles/SequenceStore.dir/main.c.obj.requires:

.PHONY : CMakeFiles/SequenceStore.dir/main.c.obj.requires

CMakeFiles/SequenceStore.dir/main.c.obj.provides: CMakeFiles/SequenceStore.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\SequenceStore.dir\build.make CMakeFiles/SequenceStore.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/SequenceStore.dir/main.c.obj.provides

CMakeFiles/SequenceStore.dir/main.c.obj.provides.build: CMakeFiles/SequenceStore.dir/main.c.obj


CMakeFiles/SequenceStore.dir/SqList.c.obj: CMakeFiles/SequenceStore.dir/flags.make
CMakeFiles/SequenceStore.dir/SqList.c.obj: ../SqList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\program\C\dataStructure\queque\SequenceStore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SequenceStore.dir/SqList.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SequenceStore.dir\SqList.c.obj   -c F:\program\C\dataStructure\queque\SequenceStore\SqList.c

CMakeFiles/SequenceStore.dir/SqList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SequenceStore.dir/SqList.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\program\C\dataStructure\queque\SequenceStore\SqList.c > CMakeFiles\SequenceStore.dir\SqList.c.i

CMakeFiles/SequenceStore.dir/SqList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SequenceStore.dir/SqList.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\program\C\dataStructure\queque\SequenceStore\SqList.c -o CMakeFiles\SequenceStore.dir\SqList.c.s

CMakeFiles/SequenceStore.dir/SqList.c.obj.requires:

.PHONY : CMakeFiles/SequenceStore.dir/SqList.c.obj.requires

CMakeFiles/SequenceStore.dir/SqList.c.obj.provides: CMakeFiles/SequenceStore.dir/SqList.c.obj.requires
	$(MAKE) -f CMakeFiles\SequenceStore.dir\build.make CMakeFiles/SequenceStore.dir/SqList.c.obj.provides.build
.PHONY : CMakeFiles/SequenceStore.dir/SqList.c.obj.provides

CMakeFiles/SequenceStore.dir/SqList.c.obj.provides.build: CMakeFiles/SequenceStore.dir/SqList.c.obj


# Object files for target SequenceStore
SequenceStore_OBJECTS = \
"CMakeFiles/SequenceStore.dir/main.c.obj" \
"CMakeFiles/SequenceStore.dir/SqList.c.obj"

# External object files for target SequenceStore
SequenceStore_EXTERNAL_OBJECTS =

SequenceStore.exe: CMakeFiles/SequenceStore.dir/main.c.obj
SequenceStore.exe: CMakeFiles/SequenceStore.dir/SqList.c.obj
SequenceStore.exe: CMakeFiles/SequenceStore.dir/build.make
SequenceStore.exe: CMakeFiles/SequenceStore.dir/linklibs.rsp
SequenceStore.exe: CMakeFiles/SequenceStore.dir/objects1.rsp
SequenceStore.exe: CMakeFiles/SequenceStore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\program\C\dataStructure\queque\SequenceStore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable SequenceStore.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SequenceStore.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SequenceStore.dir/build: SequenceStore.exe

.PHONY : CMakeFiles/SequenceStore.dir/build

CMakeFiles/SequenceStore.dir/requires: CMakeFiles/SequenceStore.dir/main.c.obj.requires
CMakeFiles/SequenceStore.dir/requires: CMakeFiles/SequenceStore.dir/SqList.c.obj.requires

.PHONY : CMakeFiles/SequenceStore.dir/requires

CMakeFiles/SequenceStore.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SequenceStore.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SequenceStore.dir/clean

CMakeFiles/SequenceStore.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\program\C\dataStructure\queque\SequenceStore F:\program\C\dataStructure\queque\SequenceStore F:\program\C\dataStructure\queque\SequenceStore\cmake-build-debug F:\program\C\dataStructure\queque\SequenceStore\cmake-build-debug F:\program\C\dataStructure\queque\SequenceStore\cmake-build-debug\CMakeFiles\SequenceStore.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SequenceStore.dir/depend

