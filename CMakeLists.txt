cmake_minimum_required(VERSION 3.23)
project(src)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

foreach(source ${SOURCE_FILES})
    get_filename_component(filename ${source} NAME_WE)
    add_executable(${filename} ${source})
endforeach()
