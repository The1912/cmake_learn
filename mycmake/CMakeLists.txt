cmake_minimum_required(VERSION 3.0.0)
project(mycmake VERSION 0.1.0)

set(PROJECT_NAME ${PROJECT_NAME})
set(PROJECT_VERSION ${PROJECT_VERSION})

include_directories(include)

FILE(GLOB_RECURSE CURRENT_INCLUDE include/*.h)
FILE(GLOB_RECURSE CURRENT_SOURCES src/*.cpp)   

add_executable(mycmake main.cpp ${CURRENT_SOURCES} ${CURRENT_INCLUDE})



