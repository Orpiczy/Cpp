cmake_minimum_required(VERSION 3.13)
project(complex_1)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors)

include_directories(.)

add_executable(complex_1
        complex-1.cpp
        complex.hpp)
