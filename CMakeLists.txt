cmake_minimum_required(VERSION 3.4...3.18)
project(cmake_example)

add_subdirectory(extern/pybind11)
pybind11_add_module(hellomodule src/main.cpp)

target_compile_definitions(hellomodule PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})
