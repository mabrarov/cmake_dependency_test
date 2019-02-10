cmake_minimum_required(VERSION 3.0)
project(static_lib_y)

set(project_base_dir "${PROJECT_SOURCE_DIR}")
set(cxx_headers_dir  "${project_base_dir}/include")
set(cxx_sources_dir  "${project_base_dir}/src")

set(cxx_headers
    "${cxx_headers_dir}/static_lib_y.h")
set(cxx_sources
    "${cxx_sources_dir}/static_lib_y.cpp")

add_library(${PROJECT_NAME} STATIC
    ${cxx_headers}
    ${cxx_sources})
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${cxx_headers_dir})
target_link_libraries(${PROJECT_NAME}
    static_lib_a)