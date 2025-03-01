#include <iostream>
#include "code0.h"

int main()
{
    doNothing();
    std::cout << "hello cpp";
    printSome();
    exit(0);
    return 0;
}

void doNothing(void)
{
}

void printSome(void)
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << i % 5 << "\t" << std::flush;
    }
}