#include <iostream>
#include <string>
#include <process.h>

int main()
{
    std::cout << getpid() << std::endl;
    unsigned int a = 45;
    std::cout << (void*)&a << std::endl;
    int i = 0;

    while (i != -99) {
        std::cin >> i;
        a = a + i;
        std::cout << a << std::endl;
        std::cout << (void*)&a << std::endl;
    }

    return 0;
}