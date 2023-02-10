#include <string>
#include <iostream>
#include <limits>

int main() //int argc, char const *argv[]
{
    std::cout << "Hello docker with C++ <--> " << std::endl;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cin.get();

    return 0;
}