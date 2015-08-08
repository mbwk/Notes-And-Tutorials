# This is an example of the kind of CMakeLists.txt I
# I use for straightforward projects.
#
# Edit and save as just "CMakeLists.txt"
#
# Attribution: http://stackoverflow.com/a/17938228
#
# # # # # # # #
# Background: #
# # # # # # # #
#
# * Writing a CMakeLists.txt for a small-medium sized glfw project.
#
# * Source files go under src/, header files go under include/.
#
# * Building on Unix is typically done by creating a build dir, entering it,
#   and calling "cmake .." or something along those lines.  CMake will generate
#   build files in this subdirectory, and running make will deposit the final
#   executable there.
#
# * CMake should attempt to locate and link against the dependencies specified
#   in the CMakeLists.txt.  I have only tested this on Funtoo Linux, and it has
#   worked as expected.
#

cmake_minimum_required(VERSION 2.8)

project( PROJECTNAME_PROJECT ) # project name, this is case sensitive

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14") # compilation flags

######################################
# finds OpenGL, GLU and X11
find_package(OpenGL REQUIRED) # searches for specified library/package on system
if(NOT OPENGL_FOUND)
    message("ERROR: OpenGL not found")
endif(NOT OPENGL_FOUND)
set(GL_LIBRARY GL GLU X11 GLEW)

file(GLOB SOURCES src/*.cpp) # globs source files every time you run cmake (but not when actually building)
include_directories(include) # adds specified include directory to include path
file(GLOB HEADERS include/*.hpp) # globs include files, similar to previous usage

add_executable(executablename ${SOURCES} ${HEADERS}) # adds compilation target: a standalone executable

# linking "glfw" and not "glfw3"
# assumes that glfw was built with BUILD_SHARED_LIBS to ON
target_link_libraries(executablename glfw ${GL_LIBRARY} m) # link to given libraries

