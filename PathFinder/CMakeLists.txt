cmake_minimum_required(VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)

project(pathFinder)

include_directories(include)

set(SOURCES src/main.cpp)

add_executable( findPath ${SOURCES})


