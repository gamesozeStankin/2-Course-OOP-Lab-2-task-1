cmake_minimum_required(VERSION 3.17)
project(oop_lab2_1)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(modules/googletest)
add_subdirectory(Car)

add_executable(oop_lab2_1 main.cpp)

target_link_libraries(oop_lab2_1 Car)
