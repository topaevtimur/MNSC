cmake_minimum_required(VERSION 3.8)
project(simple_iteration)

set(CMAKE_CXX_STANDARD 14)
set(GCC_COVERAGE_COMPILE_FLAGS "-O2")
add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})

set(SOURCE_FILES bifurcations.cpp iterations.cpp constants.h iterations.h)

add_library(simple_iteration ${SOURCE_FILES})