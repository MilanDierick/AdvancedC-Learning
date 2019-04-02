cmake_minimum_required(VERSION 3.13)
project(DynamicMemoryAllocation)

set(CMAKE_CXX_STANDARD 17)

set(DYNAMIC_MEMORY_ALLOCATION_SOURCES
        person.h
        person.cpp
        )

add_executable(DynamicMemoryAllocation ${DYNAMIC_MEMORY_ALLOCATION_SOURCES} DynamicMemoryAllocation.cpp)