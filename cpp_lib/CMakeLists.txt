cmake_minimum_required(VERSION 3.5.1)
project(LIB_DIR_EXAMPLE)

# Print start
message("===> Start to build : " ${PROJECT_NAME})

# Include headers
include_directories(
    include/
)

# Add library
add_library(
    cpp_lib
    hello_world.cpp
)

add_library(
    function_example
    function_example.cpp
)

function(InstallHeaderAPI name)
    install(
        FILES include/cpp_lib/${name}
        DESTINATION ${CMAKE_SOURCE_DIR}/API
    )
endfunction()

InstallHeaderAPI(function_example.h)
InstallHeaderAPI(hello_world.h)