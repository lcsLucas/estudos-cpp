#include <iostream>
#include "queue.h"
#include "inputoutput.h"

void controllerOperations()
{
    struct Queue queue;
    inicialize(&queue);

    int choice{0};

    do
    {
        printScreen();
        choice = getInput();

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
            std::cout << "VALUE";
            val = getInput();
            enqueue(&queue, val);
            std::cout << "OK {" << queue.last->value << "}\n";
            break;
        }
        case 2:
        {

            if (isEmpty(&queue))
            {
                std::cout << "> Fila vazia.";
            }
            else
            {
                Node *n = queue.first;

                while (n != nullptr)
                {
                    std::cout << "> " << n->value << "\n";
                    n = n->next;
                }
            }

            break;
        }
        case 3:
        {
            if (isEmpty(&queue))
            {
                std::cout << "> Fila vazia.";
            }
            else
            {
                std::cout << "> " << dequeue(&queue);
            }
            break;
        }
        case 4:
        {
            if (isEmpty(&queue))
            {
                std::cout << "> Fila vazia.";
            }
            else
            {
                std::cout << "> Fila preenchida.";
            }
            break;
        }
        case 5:
        {
            std::cout << "> " << size(&queue);
            break;
        }
        default:
        {
            std::cout << "Opção indisponível.";
            break;
        }
        }

        std::cout << "\nPressione [QUALQUER TECLA] para continuar\n";
        std::cin.ignore();
        std::cin.get();

        system("clear");

    } while (choice != 0);
}

int main()
{
    controllerOperations();
    return 0;
}