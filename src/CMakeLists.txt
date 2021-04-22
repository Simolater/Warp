set(PROJECT_SOURCES entrypoint.cpp)
set(PROJECT_HEADERS)

add_executable(${PROJECT_NAME} ${PROJECT_HEADERS} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} ${LOGGER_NAME})