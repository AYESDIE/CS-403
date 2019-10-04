cmake_minimum_required(VERSION 3.10)
project(CS403)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC Lab-*/*.cpp)

foreach(file ${SRC})
    string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}" "" bin ${file})
    string(REPLACE "/Lab-" "" bin ${bin})
    string(REPLACE ".cpp" "" bin ${bin})
    string(REPLACE "/" "_" bin ${bin})
    add_executable(${bin} ${file})
endforeach()