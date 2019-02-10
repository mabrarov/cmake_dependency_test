cmake_minimum_required(VERSION 3.0)
project(app)

add_executable(${PROJECT_NAME}
    "src/main.cpp")
target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")
target_link_libraries(${PROJECT_NAME}
    static_lib_a
    static_lib_b
    static_lib_c
    static_lib_x
    static_lib_y)
