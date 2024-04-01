cmake_minimum_required(VERSION 3.20.0)

project(dll_custom_macro)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} hello_lib)

add_library(hello_lib SHARED hello_lib.cpp hello_lib.h)
target_compile_definitions(hello_lib PUBLIC HELLOLIB_CUSTOM_EXPORTS)