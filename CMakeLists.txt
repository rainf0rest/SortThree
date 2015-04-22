cmake_minimum_required(VERSION 3.1)
project(untitled)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(untitled ${SOURCE_FILES} src/Sort.cpp src/Sort.h src/Test.cpp src/Test.h src/InsertSort.cpp src/InsertSort.h src/QuickSort.cpp src/QuickSort.h src/PartitionSort.cpp src/PartitionSort.h)