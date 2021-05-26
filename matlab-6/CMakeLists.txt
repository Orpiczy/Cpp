cmake_minimum_required(VERSION 3.13)
project(matlab_6)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors)

include_directories(
        include
)

set(SOURCE_FILES
        src/matlab.cpp
        )

add_executable(matlab_6__debug ${SOURCE_FILES} matlab-6.cpp)

# == Unit testing using Google Testing Framework ==

set(SOURCES_FILES_TESTS
        test/test_vector.cpp
        test/test_matrix.cpp
        )

add_executable(matlab_6__test ${SOURCE_FILES} ${SOURCES_FILES_TESTS} test/main_gtest.cpp)

target_include_directories(matlab_6__test PUBLIC
        ../../googletest-master/googlemock/include
        ../../googletest-master/googletest/include
        )

add_subdirectory(../../googletest-master googletest-master)

target_link_libraries(matlab_6__test gmock)
