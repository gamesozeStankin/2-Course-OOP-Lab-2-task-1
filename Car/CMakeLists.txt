project(Car)

add_library(Car
        Car.cpp Car.h)
target_include_directories(Car PUBLIC .)

add_subdirectory(test)