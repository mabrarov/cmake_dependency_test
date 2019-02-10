cmake_minimum_required(VERSION 3.0)
project(interface_lib_ya)

add_library(${PROJECT_NAME} INTERFACE)
target_link_libraries(${PROJECT_NAME} INTERFACE
    static_lib_y
    static_lib_a)
