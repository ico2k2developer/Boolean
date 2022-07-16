cmake_minimum_required(VERSION 3.22)
project(Boolean C)

set(CMAKE_C_STANDARD 11)

add_library(BooleanLib STATIC boolean.c)
add_library(BooleanDll SHARED boolean.c)

enable_testing()
add_subdirectory(ctest)