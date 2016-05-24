#Set a minimum version for CMake.
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

#Define a name for our project.
#Setting this project name also adds definitions for the variables
# ${PROJECT_NAME}, 
# ${PROJECT_SOURCE_DIR}
# ${PROJECT_BIN_DIR}
# ${HelloCMake_SOURCE_DIR}
# ${HelloCmake_BIN_DIR}
project(Globber)

#Use GLOB to gather sources files from source
#Glob matches files with argument 4 in the directory specified in argument 3.

file(GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

#Tell CMake where to look for .h files
#This allows us to use  system-style includeds for local include files.
include_directories(${CMAKE_SOURCE_DIR}/src)

#Create an executable target (Something runnable)
#Arguments: (<Executable_Name> <Sources>)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})



