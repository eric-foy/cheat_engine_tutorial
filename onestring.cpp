#include <iostream>
#include <string>

int main()
{
    std::string a = "test";
    std::cout << (void*)&a << std::endl;
    std::string i = "";

    while (i != "-99") {
        std::cin >> i;
        a = i;
        std::cout << a << std::endl;
        std::cout << (void*)&a << std::endl;
    }

    return 0;
}