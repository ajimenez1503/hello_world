cmake_minimum_required(VERSION 3.5)

project(hello_world)

message(STATUS "Create Hello_world project")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(CMAKE_JAVA_TARGET_OUTPUT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/bin")

file(REMOVE_RECURSE "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
file(MAKE_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
message(STATUS "Create $CMAKE_RUNTIME_OUTPUT_DIRECTORY folder")

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src/src_c")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src/src_cpp")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src/src_java")
