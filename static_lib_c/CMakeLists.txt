cmake_minimum_required(VERSION 3.0)
project(static_lib_c)

add_library(${PROJECT_NAME} STATIC
    "include/static_lib_c.h"
    "src/static_lib_c.cpp")
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")
