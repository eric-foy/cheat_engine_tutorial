#include <iostream>
#include <string>
#include <process.h>

// https://www.youtube.com/watch?v=MiCoP2MrDOU
// Cheat Engine 6.4 Tutorial Part 7: Introduction to Pointer Scanning!

unsigned int a = 45;

int main()
{
    // cheat engine lua script: openProcess(1234)
    std::cout << getpid() << std::endl;
    std::cout << (void*)&a << ": " << a << std::endl;
    int i = 0;

    while (i != -99) {
        std::cin >> i;
        a = a + i;
        std::cout << (void*)&a << ": " << a << std::endl;
    }

    return 0;
}
