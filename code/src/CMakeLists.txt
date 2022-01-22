cmake_minimum_required(VERSION 3.0)

project(Workshops5_6 CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#-- the list of targets --#

add_executable(ex1_read_n_tuples            read_n_tuples/main.cpp)
add_executable(ex2_filter_input             filter_input/main.cpp)
add_executable(ex3_arrays_basics            arrays_basics/main.cpp)
add_executable(ex4_std_string               std_string/main.cpp)
add_executable(problem1_name                name/main.cpp)                 # names
add_executable(ex5_string_conversions       string_conversions/main.cpp)
add_executable(ex6_string_stream            string_stream/main.cpp)
add_executable(problem2_name_with_spaces    name_with_spaces/main.cpp)     # names 2
add_executable(problem3_list_words          list_words/main.cpp)           # split string
add_executable(ex7_ints_lines               ints_lines/main.cpp)
add_executable(problem4_type_conversion     type_conversion/main.cpp)

# we have user functions in the problems below
add_executable(problem5_split_and_output    split_and_output/main.cpp)
add_executable(problem6_avgfunc             avgfunc/main.cpp)              # calculating average of array elements
add_executable(problem7_read_from_stream    read_from_stream/main.cpp)     # read from stream
add_executable(problem8_files               files/main.cpp)                # read and write text files


