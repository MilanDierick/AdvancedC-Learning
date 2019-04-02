cmake_minimum_required(VERSION 3.13)
project(Pointers)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(DynamicMemoryAllocation)
add_subdirectory(PointersLab)
add_subdirectory(Utils)

add_executable(Pointers main.cpp)