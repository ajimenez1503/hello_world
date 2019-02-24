cmake_minimum_required(VERSION 3.5)

project(hello_world)
message(STATUS "Create Hello_world project")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

file(REMOVE_RECURSE CMAKE_RUNTIME_OUTPUT_DIRECTORY)
file(MAKE_DIRECTORY CMAKE_RUNTIME_OUTPUT_DIRECTORY)
message(STATUS "Create $CMAKE_RUNTIME_OUTPUT_DIRECTORY folder")


add_executable(hello_world_c "${CMAKE_CURRENT_SOURCE_DIR}/src/src_c/hello_world_c.c")
message(STATUS "Compiled hello_world_c")

add_executable(hello_world_cpp "${CMAKE_CURRENT_SOURCE_DIR}/src/src_cpp/hello_world_cpp.cpp")
message(STATUS "Compiled hello_world_cpp")
