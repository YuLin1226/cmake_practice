cmake_minimum_required(VERSION 3.5.1)
project(EXEC_DIR_EXAMPLE)

# Print start
message("===> Start to build : " ${PROJECT_NAME})

# Use function to add executable
function(CompileExample name isGlobalIncude)
    # add executable
    add_executable(
        ${name}
        ${name}.cpp 
    )
    target_link_libraries(
        ${name} 
        cpp_lib
    )
    # Link exec to lib
    target_link_libraries(${name} cpp_lib)

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


