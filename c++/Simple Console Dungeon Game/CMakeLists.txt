cmake_minimum_required(VERSION 3.10)

project(ConsoleGame)

set(CMAKE_CXX_STANDARD 20)


file(GLOB SOURCES include/*/*.h include/*/*.cpp)

add_executable(ConsoleGame main.cpp ${SOURCES})
