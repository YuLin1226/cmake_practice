cmake_minimum_required(VERSION 3.5.1)
project(LIB_DIR_EXAMPLE)

# Print start
message("===> Start to build : " ${PROJECT_NAME})

# Include headers
# include_directories(cpp_lib)

# Add library
add_library(
    cpp_lib
    hello_world.cpp
)

