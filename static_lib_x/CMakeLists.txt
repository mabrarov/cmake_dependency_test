cmake_minimum_required(VERSION 3.0)
project(static_lib_x)

add_library(${PROJECT_NAME} STATIC
    "include/static_lib_x.h"
    "src/static_lib_x.cpp")
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")
target_link_libraries(${PROJECT_NAME}
    static_lib_a)
