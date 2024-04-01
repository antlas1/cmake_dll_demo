#include "hello_lib.h"
#include <iostream>

void HelloLib::printHello()
{
    std::cout << "Hello from dll no export! It's error example\n";
    std::cout << "Cmake warning: `hello_lib.cpp(5,1): warning C4273: HelloLib::printHello: inconsistent dll linkage`\n";
}