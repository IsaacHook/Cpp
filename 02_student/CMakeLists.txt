cmake_minimum_required(VERSION 2.8.9)
project(student)
include_directories(include) # bring headers into build
#set(SOURCES src/main.cpp src/Student.cpp) # manually add sources
file(GLOB SOURCES "src/*.cpp")
add_executable(student ${SOURCES})
