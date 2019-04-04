cmake_minimum_required(VERSION 3.5)

project(hello_world)
include(CTest)

message(STATUS "Create Hello_world project")

SET(BUILD_C OFF CACHE BOOLEAN "User-specified option to build C")
SET(BUILD_CPP OFF CACHE BOOLEAN "User-specified option to build CPP")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

file(REMOVE_RECURSE "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
file(MAKE_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
message(STATUS "Create ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} folder")

if (BUILD_C)
    add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src/src_c")
endif()
if (BUILD_CPP)
    add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src/src_cpp")
endif()