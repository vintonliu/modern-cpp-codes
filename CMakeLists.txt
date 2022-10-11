cmake_minimum_required(VERSION 3.23)
project(src)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCE_FILES *.cpp)

foreach(source ${SOURCE_FILES})
    string(REGEX MATCHALL "[0-9-]+" filename ${source})
    add_executable(${filename} ${source})
endforeach()
