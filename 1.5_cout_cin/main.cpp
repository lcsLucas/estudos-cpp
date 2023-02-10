#include <iostream>

int main()
{
    int inputVal{};
    std::cout << "Informe um número:\n";

    std::cout << inputVal << '\n';
    std::cin >> inputVal;

    std::cout << "Você digitou: " << inputVal;

    return 0;
}