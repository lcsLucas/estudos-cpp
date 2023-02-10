#include <iostream>

void printOptionsScreen()
{
    std::cout << "Selecione uma Opção:\n";
    std::cout << "\t • 1 - Inserir na Pilha.\n";
    std::cout << "\t • 2 - Percorrer a Pilha.\n";
    std::cout << "\t • 3 - Remover da Pilha.\n";
    std::cout << "\t • 4 - Verificar se Pilha Vazia.\n";
    std::cout << "\t • 5 - Verificar Tamanho da Pilha.\n";
    std::cout << "\t • 0 - Sair do Programa.\n";
}

struct pilha
{
    int value;
    struct pilha *next;
};

int getInputChoice()
{
    int choice{0};

    std::cout << ": ";
    std::cin >> choice;

    return choice;
}

int getNumberStack()
{
    std::cout << "== Inserir na Pilha ==";
    std::cout << "\n\tInforme o valor: ";
    int val{0};
    std::cin >> val;
    return val;
}

pilha *insertStack(int val)
{
    pilha *p = nullptr;

    p = (struct pilha *)malloc(sizeof(struct pilha));
    p->value = val;
    p->next = nullptr;

    return p;
}

void operations(int choice, pilha *&ponteiro)
{

    switch (choice)
    {
    case 0:
    {
        std::cout << "Saindo do programa...";
        break;
    }
    case 1:
    {
        int val{0};
        val = getNumberStack();

        pilha *p = insertStack(val);

        if (ponteiro != nullptr)
            p->next = ponteiro;

        ponteiro = p;

        std::cout << "* OK {" << ponteiro->value << "} *\n\n";
        // std::cout << ponteiro;
        break;
    }
    case 2:
    {
        pilha *p2 = ponteiro;

        // std::cout << ponteiro << std::endl;
        // std::cout << p2 << std::endl;

        if (p2 == nullptr)
        {
            std::cout << "    * Pilha Vazia\n";
        }
        else
        {
            std::cout << "== Percorrendo Pilha ==\n";

            while (p2 != nullptr)
            {
                std::cout << "> " << p2->value << "\n";
                p2 = p2->next;
            }

            std::cout << "== Percorrendo Pilha ==\n\n";
        }

        break;
    }

    case 3:
    {

        if (ponteiro == nullptr)
        {
            std::cout << "* Pilha Vazia.\n\n";
        }
        else
        {
            pilha *p2 = ponteiro;
            ponteiro = p2->next;
            std::cout << "Valor {" << p2->value << "} removido da pilha.\n\n";
            free(p2);
            p2 = nullptr;
        }

        break;
    }

    case 4:
    {
        if (ponteiro == nullptr)
            std::cout << "* Pilha Vazia\n\n";
        else
            std::cout << "== Conteúdo na Pilha ==\n";

        break;
    }

    case 5:
    {
        int tamanho{0};
        pilha *p2 = ponteiro;

        while (p2 != nullptr)
        {
            tamanho++;
            p2 = p2->next;
        }

        std::cout << "* Tamanho da Pilha: " << tamanho << "\n\n";

        break;
    }

    default:
        std::cout << "> Não encontrado nenhuma opção com esse valor.";
        break;
    }

    // Pressione [ENTER] para limpar tela
    // system("clear");
}

int main()
{
    pilha *ponteiro = nullptr;

    int choice{0};

    do
    {
        printOptionsScreen();
        choice = getInputChoice();
        system("clear");
        operations(choice, ponteiro);

        std::cout << "Pressione [QUALQUER TECLA] para continuar\n";
        std::cin.ignore();
        std::cin.get();

        /*int trash;
        std::cin >> trash;*/
        system("clear");

    } while (choice != 0);

    return choice;
}