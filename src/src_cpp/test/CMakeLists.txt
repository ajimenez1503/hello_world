# tell CMake to use CTest extension
enable_testing()
add_executable(test_cpp "${CMAKE_CURRENT_SOURCE_DIR}/test.cpp")
target_link_libraries(test_cpp PRIVATE hello_world_cpp_lib)
add_test(NAME test COMMAND test_cpp)
