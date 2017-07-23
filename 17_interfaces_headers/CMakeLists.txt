# bare minimum
cmake_minimum_required(VERSION 2.8.9)
project(the_point_of_interfaces)
include_directories(include) # bring headers into build
add_executable(sqrt_without_interface src/FileErrorLog.cpp src/sqrt_without_interface.cpp src/ScreenErrorLog) # add executable
add_executable(sqrt src/IFileErrorLog.cpp src/sqrt.cpp src/IScreenErrorLog) # add executable
