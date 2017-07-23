# bare minimum
cmake_minimum_required(VERSION 2.8.9)
set(CMAKE_BUILD_TYPE Release)
project(student)
include_directories(include) # bring headers into build
add_library(student SHARED src/Student.cpp) # add executable
install(TARGETS student DESTINATION /usr/lib)

