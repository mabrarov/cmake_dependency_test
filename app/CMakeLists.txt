cmake_minimum_required(VERSION 3.0)
project(app)

set(project_base_dir "${PROJECT_SOURCE_DIR}")
set(cxx_headers_dir  "${project_base_dir}/include")
set(cxx_sources_dir  "${project_base_dir}/src")

set(cxx_sources
    "${cxx_sources_dir}/main.cpp")

add_executable(${PROJECT_NAME}
    ${cxx_sources})
target_link_libraries(${PROJECT_NAME}
    static_lib_a
    static_lib_b
    static_lib_c
    static_lib_x
    static_lib_y)
