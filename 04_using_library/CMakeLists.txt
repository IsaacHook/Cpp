# bare minimum
cmake_minimum_required(VERSION 2.8.9)
project(student)

set(PROJECT_LINK_LIBS libstudent.so)
link_directories(/usr/lib)

include_directories(~/C++/03_library/include) # bring headers into build

add_executable(student src/main.cpp) # add executable
target_link_libraries(student ${PROJECT_LINK_LIBS})