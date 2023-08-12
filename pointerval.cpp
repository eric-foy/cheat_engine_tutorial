#include <iostream>
#include <string>
#include <process.h>

int main()
{
    // cheat engine lua script: openProcess(1234)
    std::cout << getpid() << std::endl;
    unsigned int a = 45;
    unsigned int *b = &a;
    std::cout << (void*)&b << ": " << b << " -> " << *b << std::endl;
    int i = 0;

    while (i != -99) {
        std::cin >> i;
        a = a + i;
        std::cout << (void*)&b << ": " << b << " -> " << *b << std::endl;
    }

    return 0;
}
