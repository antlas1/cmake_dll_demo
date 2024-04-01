#include "hello_lib.h"
#include <iostream>

void HelloLib::printHello()
{
    std::cout << "Hello from dll custom macro!\n";
}