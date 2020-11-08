project(Car_test)

add_executable(Car_test main_test.cpp)

target_link_libraries(Car_test Car gtest)

enable_testing()
add_test(
        NAME Car_test
        COMMAND Car_test
)