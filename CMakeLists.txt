cmake_minimum_required(VERSION 3.22)
project(glsl_include_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")

add_library(glsl_include_cpp include/glsl-include.h src/glsl-include.cpp include/glsl-include/shader.h src/shader.cpp include/glsl-include/shader_context.h src/shader_context.cpp)

target_include_directories(glsl_include_cpp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)