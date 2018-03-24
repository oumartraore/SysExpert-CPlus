#------------------------------------------------------------------------------#
#	1- Project settings


# CMake version (3.0 To get the new update)
cmake_minimum_required (VERSION 2.6)

# Project Name
project (Expert_System)

# Software version number.
set (Expert_System_VERSION_MAJOR 1)
set (Expert_System_VERSION_MINOR 0)

# Choose C++ Compilator
#set(CMAKE_CXX_COMPILER "g++")

# Mode Release/Debug
set(CMAKE_BUILD_TYPE Release)

# Executable path
SET (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# Header file to pass some of the CMake settings to the source code
configure_file (
  	"${PROJECT_SOURCE_DIR}/Expert_SystemConfig.h.in"
  	"${PROJECT_BINARY_DIR}/Expert_SystemConfig.h"
)



#------------------------------------------------------------------------------#
#	2- Add library (our source & header)

# Getting all file in the sources & header
file(GLOB_RECURSE Expert_System_SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")
file(GLOB_RECURSE Expert_System_HEADERS "${PROJECT_SOURCE_DIR}/src/*.h")

set (Expert_System_INCLUDE_DIRS "")
foreach (_headerFile ${Expert_System_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND Expert_System_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES Expert_System_INCLUDE_DIRS)

# Add this to include_directory
include_directories ("${Expert_System_INCLUDE_DIRS}")



#------------------------------------------------------------------------------
#	3- Executable & Compilation & Run

# Executable name
add_executable(Expert_System main.cpp)