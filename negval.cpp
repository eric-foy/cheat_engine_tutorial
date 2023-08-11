#include <iostream>
#include <string>
#include <process.h>

// https://www.youtube.com/watch?v=t7pdWL5XeQA
// Cheat Engine 6.4 Tutorial Quick Tip: How to Scan for Negative Values

int main()
{
    // cheat engine lua script: openProcess(1234)
    std::cout << getpid() << std::endl;
    int a = -45;
    std::cout << (void*)&a << ": " << a << std::endl;
    int i = 0;

    while (i != -99) {
        std::cin >> i;
        a = a + i;
        std::cout << (void*)&a << ": " << a << std::endl;
    }

    return 0;
}
