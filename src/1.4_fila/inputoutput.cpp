#include <iostream>

void printScreen()
{
    std::cout << "***************************************************\n";
    std::cout << "*              Selecione uma Opção:               *\n";
    std::cout << "***************************************************\n";
    std::cout << "* \t • 1 - Inserir na Fila.                   *\n";
    std::cout << "* \t • 2 - Percorrer a Fila.                  *\n";
    std::cout << "* \t • 3 - Remover da Fila.                   *\n";
    std::cout << "* \t • 4 - Verificar se Fila Vazia.           *\n";
    std::cout << "* \t • 5 - Verificar Tamanho da Fila.         *\n";
    std::cout << "* \t • 0 - Sair do Programa.                  *\n";
    std::cout << "***************************************************\n";
}

int getInput()
{
    int choice{0};

    std::cout << ": ";
    std::cin >> choice;

    return choice;
}