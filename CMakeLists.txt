cmake_minimum_required(VERSION 3.8)
project(MNSC)

set(CMAKE_CXX_STANDARD 14)

set(GCC_COVERAGE_COMPILE_FLAGS "-O2")
add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})

set(SOURCE_FILES main.cpp)
add_executable(MNSC ${SOURCE_FILES})
add_subdirectory(simple_iteration)
add_subdirectory(newton)

target_link_libraries(MNSC simple_iteration newton)