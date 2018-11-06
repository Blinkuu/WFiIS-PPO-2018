cmake_minimum_required (VERSION 2.6)
project (Project)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
    )

file(GLOB SRC
        ${PROJECT_SOURCE_DIR}/src/*.cpp
    )

add_executable(project ${SRC})