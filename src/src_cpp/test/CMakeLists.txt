# tell CMake to use CTest extension
if(BUILD_TESTING)
    enable_testing()
    add_executable(test_cpp "${CMAKE_CURRENT_SOURCE_DIR}/test.cpp")
    target_link_libraries(test_cpp PRIVATE hello_world_cpp_lib)
    add_test(
        NAME test_antonio
        WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        COMMAND test_cpp)
endif()
