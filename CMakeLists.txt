cmake_minimum_required(VERSION 3.14)

project(Warp)

set(CMAKE_CXX_STANDARD 17)

set(LOGGER_NAME ${PROJECT_NAME}_logger)

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    add_compile_definitions(WP_LOG_ENABLE)
endif()
if(CMAKE_BUILD_TYPE MATCHES "Release")
    add_compile_definitions(WP_LOG_ENABLE)
endif()

add_subdirectory(logger)

add_subdirectory(src)
