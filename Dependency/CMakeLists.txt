cmake_minimum_required(VERSION 3.0)
project (deps)

#Use find_package to retrieve OpenMP
find_package(OpenMP)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

set(SOURCES "src/main.cpp")

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})