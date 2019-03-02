STRING(TOLOWER "${CMAKE_BUILD_TYPE}" CMAKE_BUILD_TYPE_LOWER)
if(CMAKE_BUILD_TYPE_LOWER STREQUAL "debug")
    message(STATUS "Debug mode")
    add_executable(hello_world_cppd "${CMAKE_CURRENT_SOURCE_DIR}/hello_world_cpp.cpp")

    option(CODE_COVERAGE "Enable coverage reporting" OFF)
    if(CODE_COVERAGE)
        message(STATUS "Code Coverage mode")
        target_compile_options(hello_world_cppd PRIVATE
            -O0        # no optimization
            -g         # generate debug info
            --coverage # sets all required flags
        )
        target_link_options(hello_world_cppd PRIVATE --coverage)
    endif()
endif()
if(CMAKE_BUILD_TYPE_LOWER STREQUAL "release")
    message(STATUS "Release mode")
    add_executable(hello_world_cpp "${CMAKE_CURRENT_SOURCE_DIR}/hello_world_cpp.cpp")
ENDIF()
message(STATUS "Compiled hello_world_cpp")
