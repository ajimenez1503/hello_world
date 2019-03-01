find_package(Java REQUIRED)
include(UseJava)

add_jar(hello_world_java "${CMAKE_CURRENT_SOURCE_DIR}/hello_world_java.java")
message(STATUS "Compiled hello_world_java")
