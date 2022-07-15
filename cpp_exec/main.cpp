#include <stdio.h>
#include "cpp_lib/hello_world.h"
#include "cpp_lib/function_example.h"
#include <boost/bind.hpp>


int main(int argc, char *argv[]) 
{
    printHelloWorld();

    auto bind_func = boost::bind(printSum, _1, 2);
    bind_func(5);

    return 0;
}