cmake_minimum_required(VERSION 3.0)

project(LibApp)
#Add a sub-project (A library) as a dependency
add_subdirectory(Library)

#Create the client application
add_executable(LibApp ${LibApp_SOURCE_DIR}/src/main.cpp)
#Link the library from the subproject
target_link_libraries(LibApp Library)


