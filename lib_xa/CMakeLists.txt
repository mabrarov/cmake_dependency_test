cmake_minimum_required(VERSION 3.0)
project(lib_xa)

#add_library(${PROJECT_NAME} INTERFACE)
#target_link_libraries(${PROJECT_NAME} INTERFACE
#    static_lib_x
#    static_lib_a)

#add_dependencies(static_lib_x static_lib_a)

add_library(${PROJECT_NAME} SHARED
    "src/fake.cpp")
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")
target_link_libraries(${PROJECT_NAME}
    static_lib_x
    static_lib_a)
