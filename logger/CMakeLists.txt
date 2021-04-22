add_library(${LOGGER_NAME} src/Log.cpp src/Log.hpp)

target_include_directories(${LOGGER_NAME} PUBLIC src/)

add_subdirectory(vendor/spdlog)

target_link_libraries(${LOGGER_NAME} spdlog)