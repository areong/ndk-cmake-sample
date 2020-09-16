#include <iostream>
#include "func.h"

int main(int argc, char** argv)
{
    std::cout << "Hello NDK CMake!\n";
    std::cout << "5 + 6 = " << add(5, 6) << "\n";
    return 0;
}
