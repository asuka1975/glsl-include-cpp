cmake_minimum_required(VERSION 3.22)
project(glsl_include_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")

add_library(glsl_include_cpp include/glsl-include.h src/glsl-include.cpp)
