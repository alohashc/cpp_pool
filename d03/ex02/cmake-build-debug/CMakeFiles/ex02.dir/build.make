# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ex02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex02.dir/flags.make

CMakeFiles/ex02.dir/main.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex02.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/main.cpp.o -c "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/main.cpp"

CMakeFiles/ex02.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/main.cpp" > CMakeFiles/ex02.dir/main.cpp.i

CMakeFiles/ex02.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/main.cpp" -o CMakeFiles/ex02.dir/main.cpp.s

CMakeFiles/ex02.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ex02.dir/main.cpp.o.requires

CMakeFiles/ex02.dir/main.cpp.o.provides: CMakeFiles/ex02.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex02.dir/build.make CMakeFiles/ex02.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ex02.dir/main.cpp.o.provides

CMakeFiles/ex02.dir/main.cpp.o.provides.build: CMakeFiles/ex02.dir/main.cpp.o


CMakeFiles/ex02.dir/FragTrap.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/FragTrap.cpp.o: ../FragTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex02.dir/FragTrap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/FragTrap.cpp.o -c "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/FragTrap.cpp"

CMakeFiles/ex02.dir/FragTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/FragTrap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/FragTrap.cpp" > CMakeFiles/ex02.dir/FragTrap.cpp.i

CMakeFiles/ex02.dir/FragTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/FragTrap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/FragTrap.cpp" -o CMakeFiles/ex02.dir/FragTrap.cpp.s

CMakeFiles/ex02.dir/FragTrap.cpp.o.requires:

.PHONY : CMakeFiles/ex02.dir/FragTrap.cpp.o.requires

CMakeFiles/ex02.dir/FragTrap.cpp.o.provides: CMakeFiles/ex02.dir/FragTrap.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex02.dir/build.make CMakeFiles/ex02.dir/FragTrap.cpp.o.provides.build
.PHONY : CMakeFiles/ex02.dir/FragTrap.cpp.o.provides

CMakeFiles/ex02.dir/FragTrap.cpp.o.provides.build: CMakeFiles/ex02.dir/FragTrap.cpp.o


CMakeFiles/ex02.dir/ScavTrap.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/ScavTrap.cpp.o: ../ScavTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex02.dir/ScavTrap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/ScavTrap.cpp.o -c "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/ScavTrap.cpp"

CMakeFiles/ex02.dir/ScavTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/ScavTrap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/ScavTrap.cpp" > CMakeFiles/ex02.dir/ScavTrap.cpp.i

CMakeFiles/ex02.dir/ScavTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/ScavTrap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/ScavTrap.cpp" -o CMakeFiles/ex02.dir/ScavTrap.cpp.s

CMakeFiles/ex02.dir/ScavTrap.cpp.o.requires:

.PHONY : CMakeFiles/ex02.dir/ScavTrap.cpp.o.requires

CMakeFiles/ex02.dir/ScavTrap.cpp.o.provides: CMakeFiles/ex02.dir/ScavTrap.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex02.dir/build.make CMakeFiles/ex02.dir/ScavTrap.cpp.o.provides.build
.PHONY : CMakeFiles/ex02.dir/ScavTrap.cpp.o.provides

CMakeFiles/ex02.dir/ScavTrap.cpp.o.provides.build: CMakeFiles/ex02.dir/ScavTrap.cpp.o


CMakeFiles/ex02.dir/ClapTrap.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/ClapTrap.cpp.o: ../ClapTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex02.dir/ClapTrap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/ClapTrap.cpp.o -c "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/ClapTrap.cpp"

CMakeFiles/ex02.dir/ClapTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/ClapTrap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/ClapTrap.cpp" > CMakeFiles/ex02.dir/ClapTrap.cpp.i

CMakeFiles/ex02.dir/ClapTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/ClapTrap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/ClapTrap.cpp" -o CMakeFiles/ex02.dir/ClapTrap.cpp.s

CMakeFiles/ex02.dir/ClapTrap.cpp.o.requires:

.PHONY : CMakeFiles/ex02.dir/ClapTrap.cpp.o.requires

CMakeFiles/ex02.dir/ClapTrap.cpp.o.provides: CMakeFiles/ex02.dir/ClapTrap.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex02.dir/build.make CMakeFiles/ex02.dir/ClapTrap.cpp.o.provides.build
.PHONY : CMakeFiles/ex02.dir/ClapTrap.cpp.o.provides

CMakeFiles/ex02.dir/ClapTrap.cpp.o.provides.build: CMakeFiles/ex02.dir/ClapTrap.cpp.o


# Object files for target ex02
ex02_OBJECTS = \
"CMakeFiles/ex02.dir/main.cpp.o" \
"CMakeFiles/ex02.dir/FragTrap.cpp.o" \
"CMakeFiles/ex02.dir/ScavTrap.cpp.o" \
"CMakeFiles/ex02.dir/ClapTrap.cpp.o"

# External object files for target ex02
ex02_EXTERNAL_OBJECTS =

ex02: CMakeFiles/ex02.dir/main.cpp.o
ex02: CMakeFiles/ex02.dir/FragTrap.cpp.o
ex02: CMakeFiles/ex02.dir/ScavTrap.cpp.o
ex02: CMakeFiles/ex02.dir/ClapTrap.cpp.o
ex02: CMakeFiles/ex02.dir/build.make
ex02: CMakeFiles/ex02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ex02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex02.dir/build: ex02

.PHONY : CMakeFiles/ex02.dir/build

CMakeFiles/ex02.dir/requires: CMakeFiles/ex02.dir/main.cpp.o.requires
CMakeFiles/ex02.dir/requires: CMakeFiles/ex02.dir/FragTrap.cpp.o.requires
CMakeFiles/ex02.dir/requires: CMakeFiles/ex02.dir/ScavTrap.cpp.o.requires
CMakeFiles/ex02.dir/requires: CMakeFiles/ex02.dir/ClapTrap.cpp.o.requires

.PHONY : CMakeFiles/ex02.dir/requires

CMakeFiles/ex02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex02.dir/clean

CMakeFiles/ex02.dir/depend:
	cd "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02" "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02" "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug" "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug" "/nfs/2016/a/alohashc/projects/unit/C++ pool/d03/ex02/cmake-build-debug/CMakeFiles/ex02.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex02.dir/depend

