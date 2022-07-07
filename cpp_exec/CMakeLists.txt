cmake_minimum_required(VERSION 3.5.1)
project(EXEC_DIR_EXAMPLE)

# Print start
message("===> Start to build : " ${PROJECT_NAME})

# Add executable
add_executable(cpp_exec main.cpp)

# Include headers: 2 methods
set(global_include_dir false)
if(global_include_dir)
    include_directories(
        ../cpp_lib/include/
    )
else()
    target_include_directories(
        cpp_exec PRIVATE ../cpp_lib/include/
    )
endif()

# Link exec to lib
target_link_libraries(cpp_exec cpp_lib)