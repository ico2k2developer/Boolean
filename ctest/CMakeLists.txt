cmake_minimum_required(VERSION 3.22)

include_directories(../)
link_libraries(BooleanLib)

add_executable(ctest_boolean boolean.c)
add_test(boolean ctest_boolean)