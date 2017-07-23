# bare minimum
cmake_minimum_required(VERSION 2.8.9)
project(student)
include_directories(include) # bring headers into build
add_executable(student src/Student.cpp src/main.cpp) # add executable

# can do some fancy stuff and set variables if you want to be fly
# set(SOURCES src/main.cpp src/Student.cpp) # manually add sources
# file(GLOB SOURCES "src/*.cpp")
# add_executable(student ${SOURCES})
