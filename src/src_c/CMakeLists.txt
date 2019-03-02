STRING(TOLOWER "${CMAKE_BUILD_TYPE}" CMAKE_BUILD_TYPE_LOWER)
if(CMAKE_BUILD_TYPE_LOWER STREQUAL "debug")
    message(STATUS "Debug mode")
    add_executable(hello_world_cd "${CMAKE_CURRENT_SOURCE_DIR}/hello_world_c.c")

    SET(CODE_COVERAGE OFF CACHE BOOLEAN "User-specified option to enable coverage reporting")
    if(CODE_COVERAGE)
        message(STATUS "Code Coverage mode")
        target_compile_options(hello_world_cd PRIVATE
            -O0        # no optimization
            -g         # generate debug info
            --coverage # sets all required flags
        )
        if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
        target_link_options(hello_world_cd PRIVATE --coverage)
      else()
        target_link_libraries(hello_world_cd PRIVATE --coverage)
      endif()
    endif()
endif()
if(CMAKE_BUILD_TYPE_LOWER STREQUAL "release")
    message(STATUS "Release mode")
    add_executable(hello_world_c "${CMAKE_CURRENT_SOURCE_DIR}/hello_world_c.c")
ENDIF()
message(STATUS "Compiled hello_world_c")
