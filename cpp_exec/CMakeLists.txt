cmake_minimum_required(VERSION 3.5.1)
project(EXEC_DIR_EXAMPLE)

# Print start
message("===> Start to build : " ${PROJECT_NAME})

# Add executable
add_executable(cpp_exec main.cpp)

# Link exec to lib
target_link_libraries(cpp_exec cpp_lib)