project(Car)

add_library(Car
            Car.cpp Car.h
            Mersedes.cpp Mersedes.h
            VAZ.cpp VAZ.h)
target_include_directories(Car PUBLIC .)

add_subdirectory(test)