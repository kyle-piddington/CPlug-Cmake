#Set a minimum version for CMake.
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

#Define a name for our project.
#Setting this project name also adds definitions for the variables
# ${PROJECT_NAME}, 
# ${PROJECT_SOURCE_DIR}
# ${PROJECT_BIN_DIR}
# ${HelloCMake_SOURCE_DIR}
# ${HelloCmake_BIN_DIR}
project(HelloCmake)

#Define a new variable named "Sources, and set it's value to "src/main.cpp"
set(SOURCES "src/main.cpp")

#Create an executable target (Something runnable)
#Arguments: (<Executable_Name> <Sources>)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})



