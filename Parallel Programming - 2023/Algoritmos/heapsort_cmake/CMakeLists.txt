cmake_minimum_required(VERSION 3.0)
project(heapsort)

# Add the heapsort library
add_library(heapsort STATIC heapsort.c)
target_include_directories(heapsort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add an example executable that uses the heapsort library
add_executable(example main.c)
target_link_libraries(example heapsort)
