cmake_minimum_required(VERSION 3.0)

project(Library)

#Create a library output (Instead of an executable)
add_library(Library ${PROJECT_SOURCE_DIR}/src/Library.cpp)

#Specify the include directories of this project, and allow other superprojects to include these directories as well.
target_include_directories(
   Library PUBLIC
   src)
