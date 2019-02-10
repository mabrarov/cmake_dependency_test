cmake_minimum_required(VERSION 3.0)
project(static_lib_a)

add_library(${PROJECT_NAME} STATIC
    "include/static_lib_a.h"
    "src/static_lib_a.cpp")
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")
