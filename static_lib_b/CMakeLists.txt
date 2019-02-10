cmake_minimum_required(VERSION 3.0)
project(static_lib_b)

add_library(${PROJECT_NAME} STATIC
    "include/static_lib_b.h"
    "src/static_lib_b.cpp")
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")
