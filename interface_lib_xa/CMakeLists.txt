cmake_minimum_required(VERSION 3.0)
project(interface_lib_xa)

add_library(${PROJECT_NAME} INTERFACE)
target_link_libraries(${PROJECT_NAME} INTERFACE
    static_lib_x
    static_lib_a)
