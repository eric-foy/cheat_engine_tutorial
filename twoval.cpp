#include <iostream>
#include <string>
#include <sstream>
#include <process.h>

// https://www.youtube.com/watch?v=7--i3jDgtMs
// Cheat Engine 6.4 Tutorial Part 5: Finding Multiple Values at the Same Time

int main()
{
    // cheat engine lua script: openProcess(1234)
    std::cout << getpid() << std::endl;
    unsigned int a = 45;
    unsigned int b = 95;
    std::cout << (void*)&a << ": " << a << std::endl;
    std::cout << (void*)&b << ": " << b << std::endl;

    std::string line;
    std::string word;
    int i;
    
    while (true) {
        std::getline(std::cin, line);
        //std::cout << line << std::endl;
        std::stringstream linestream(line);
        linestream >> word;

        if (word == "a") {
            linestream >> i;
            a = a + i;
            std::cout << (void*)&a << ": " << a << std::endl;
            std::cout << (void*)&b << ": " << b << std::endl;
        }
        else if (word == "b") {
            linestream >> i;
            b = b + i;
            std::cout << (void*)&a << ": " << a << std::endl;
            std::cout << (void*)&b << ": " << b << std::endl;
        }
        else if (word == "exit") {
            break;
        }
    }
    

    return 0;
}