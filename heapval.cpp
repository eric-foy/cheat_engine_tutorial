#include <iostream>
#include <string>
#include <process.h>

int main()
{
    // cheat engine lua script: openProcess(1234)
    std::cout << getpid() << std::endl;
    unsigned int *a = new unsigned int(45);
    std::cout << (void*)&a << ": " << a << " -> " << *a << std::endl;
    int i = 0;

    while (i != -99) {
        std::cin >> i;
        *a = *a + i;
        std::cout << (void*)&a << ": " << a << " -> " << *a << std::endl;
    }

    return 0;
}
