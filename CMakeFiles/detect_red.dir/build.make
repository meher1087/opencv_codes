# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mady/Documents/opencv_codes/detect_red

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mady/Documents/opencv_codes/detect_red

# Include any dependencies generated for this target.
include CMakeFiles/detect_red.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/detect_red.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/detect_red.dir/flags.make

CMakeFiles/detect_red.dir/detect_red.cpp.o: CMakeFiles/detect_red.dir/flags.make
CMakeFiles/detect_red.dir/detect_red.cpp.o: detect_red.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mady/Documents/opencv_codes/detect_red/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/detect_red.dir/detect_red.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/detect_red.dir/detect_red.cpp.o -c /home/mady/Documents/opencv_codes/detect_red/detect_red.cpp

CMakeFiles/detect_red.dir/detect_red.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/detect_red.dir/detect_red.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mady/Documents/opencv_codes/detect_red/detect_red.cpp > CMakeFiles/detect_red.dir/detect_red.cpp.i

CMakeFiles/detect_red.dir/detect_red.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/detect_red.dir/detect_red.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mady/Documents/opencv_codes/detect_red/detect_red.cpp -o CMakeFiles/detect_red.dir/detect_red.cpp.s

CMakeFiles/detect_red.dir/detect_red.cpp.o.requires:
.PHONY : CMakeFiles/detect_red.dir/detect_red.cpp.o.requires

CMakeFiles/detect_red.dir/detect_red.cpp.o.provides: CMakeFiles/detect_red.dir/detect_red.cpp.o.requires
	$(MAKE) -f CMakeFiles/detect_red.dir/build.make CMakeFiles/detect_red.dir/detect_red.cpp.o.provides.build
.PHONY : CMakeFiles/detect_red.dir/detect_red.cpp.o.provides

CMakeFiles/detect_red.dir/detect_red.cpp.o.provides.build: CMakeFiles/detect_red.dir/detect_red.cpp.o

# Object files for target detect_red
detect_red_OBJECTS = \
"CMakeFiles/detect_red.dir/detect_red.cpp.o"

# External object files for target detect_red
detect_red_EXTERNAL_OBJECTS =

detect_red: CMakeFiles/detect_red.dir/detect_red.cpp.o
detect_red: CMakeFiles/detect_red.dir/build.make
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_videostab.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_ts.a
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_superres.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_stitching.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_contrib.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_nonfree.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_ocl.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_gpu.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_photo.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_objdetect.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_legacy.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_video.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_ml.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_calib3d.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_features2d.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_highgui.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_imgproc.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_flann.so.2.4.11
detect_red: /home/mady/Documents/opencv-2.4.11/release/lib/libopencv_core.so.2.4.11
detect_red: CMakeFiles/detect_red.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable detect_red"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/detect_red.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/detect_red.dir/build: detect_red
.PHONY : CMakeFiles/detect_red.dir/build

CMakeFiles/detect_red.dir/requires: CMakeFiles/detect_red.dir/detect_red.cpp.o.requires
.PHONY : CMakeFiles/detect_red.dir/requires

CMakeFiles/detect_red.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/detect_red.dir/cmake_clean.cmake
.PHONY : CMakeFiles/detect_red.dir/clean

CMakeFiles/detect_red.dir/depend:
	cd /home/mady/Documents/opencv_codes/detect_red && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mady/Documents/opencv_codes/detect_red /home/mady/Documents/opencv_codes/detect_red /home/mady/Documents/opencv_codes/detect_red /home/mady/Documents/opencv_codes/detect_red /home/mady/Documents/opencv_codes/detect_red/CMakeFiles/detect_red.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/detect_red.dir/depend

