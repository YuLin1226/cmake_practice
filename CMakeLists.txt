cmake_minimum_required(VERSION 3.5.1)
project(CMAKE_EXAMPLE)

# Print start
message("===> Start to build : " ${PROJECT_NAME})

# include subdirectory
add_subdirectory(cpp_lib)
add_subdirectory(cpp_exec)


