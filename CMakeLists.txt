cmake_minimum_required(VERSION 3.19)
project(KaoYan)

set(CMAKE_CXX_STANDARD 14)


add_executable(InsertSort Sort/InsertSort.cpp)
add_executable(BubbleSort Sort/BubbleSort.cpp)
add_executable(QuickSort Sort/QuickSort.cpp)
add_executable(SelectSort Sort/SelectSort.cpp)