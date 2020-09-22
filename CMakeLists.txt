cmake_minimum_required(VERSION 3.5)
project(gtest_cmake_example)

option(BUILD_TESTS "Build tests" OFF)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)
aux_source_directory(src SUM_SRCS)
add_library(sum ${SUM_SRCS})

if (BUILD_TESTS)
    add_subdirectory(tests)
endif ()
