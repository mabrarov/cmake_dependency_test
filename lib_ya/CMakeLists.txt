cmake_minimum_required(VERSION 3.0)
project(lib_ya)

set(project_base_dir "${PROJECT_SOURCE_DIR}")
set(cxx_headers_dir  "${project_base_dir}/include")
set(cxx_sources_dir  "${project_base_dir}/src")

set(cxx_sources
    "${cxx_sources_dir}/fake.cpp")

#add_library(${PROJECT_NAME} INTERFACE)
#target_link_libraries(${PROJECT_NAME} INTERFACE
#    static_lib_ya
#    static_lib_a)

#add_dependencies(static_lib_ya static_lib_a)

add_library(${PROJECT_NAME} SHARED
    ${cxx_sources})
target_link_libraries(${PROJECT_NAME}
    static_lib_y
    static_lib_a)
