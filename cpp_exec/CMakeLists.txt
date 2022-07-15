cmake_minimum_required(VERSION 3.5.1)
project(EXEC_DIR_EXAMPLE)

# Print start
message("===> Start to build : " ${PROJECT_NAME})

# Use function to add executable
function(CompileExample name isGlobalIncude)

    find_package(
        Boost REQUIRED
    )
    if(Boost_FOUND)
        include_directories(${Boost_INCLUDE_DIRS})

        MESSAGE( STATUS "Boost_INCLUDE_DIRS = ${Boost_INCLUDE_DIRS}.")
        MESSAGE( STATUS "Boost_LIBRARIES = ${Boost_LIBRARIES}.")
        MESSAGE( STATUS "Boost_LIB_VERSION = ${Boost_LIB_VERSION}.")

    endif()

    # add executable
    add_executable(
        ${name}
        ${name}.cpp 
    )
    # link lib
    target_link_libraries(
        ${name} 
        cpp_lib
        function_example
    )

    # Include headers: 2 methods
    set(global_include_dir ${isGlobalIncude})
    if(global_include_dir)
        include_directories(
            ../cpp_lib/include/
        )
    else()
        target_include_directories(
            ${name} PRIVATE ../cpp_lib/include/
        )
    endif()

endfunction()

CompileExample("main" false)


