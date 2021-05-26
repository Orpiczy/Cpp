cmake_minimum_required(VERSION 3.13)
project(matlab_5)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors)

include_directories(
        include
)

set(SOURCE_FILES
        src/matlab.cpp
        )

add_executable(matlab_5__debug ${SOURCE_FILES} matlab-5.cpp)

# == Unit testing using Google Testing Framework ==

set(SOURCES_FILES_TESTS
        test/test_vector.cpp
        test/test_matrix.cpp
        )

add_executable(matlab_5__test ${SOURCE_FILES} ${SOURCES_FILES_TESTS} test/main_gtest.cpp)

target_include_directories(matlab_5__test PUBLIC
        ../../googletest-master/googlemock/include
        ../../googletest-master/googletest/include
        )

add_subdirectory(../../googletest-master googletest-master)

target_link_libraries(matlab_5__test gmock)
