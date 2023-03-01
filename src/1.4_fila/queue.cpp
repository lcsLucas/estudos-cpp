#include "queue.h"

#include <iostream>

// void inicialize(Queue *q): cria uma fila de Items vazia
void inicialize(Queue *q)
{
    q->first = nullptr;
    q->last = nullptr;
}

// Node *createNode(int newValue): cria un novo nó para fila
Node *createNode(int newValue)
{
    Node *n = nullptr;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->value = newValue;
    n->next = nullptr;

    return n;
}

// bool isEmpty(Queue *q): esta fila está vazia?
bool isEmpty(Queue *q)
{
    return q->first == nullptr && q->last == nullptr;
}

// size(Queue *q):	número de Items nesta fila
int size(Queue *q)
{
    int size{0};
    Node *q2 = q->first;

    while (q2 != nullptr)
    {
        size++;
        q2 = q2->next;
    }

    return size;
}

// void enqueue(Queue *q, int newValue): coloca item nesta fila
void enqueue(Queue *q, int newValue)
{
    Node *newNode = createNode(newValue);

    if (isEmpty(q))
    {
        q->first = q->last = newNode;
    }
    else
    {
        q->last->next = newNode;
        q->last = newNode;
    }
}

// int dequeue(Queue *q): remove o item mais antigo desta fila
int dequeue(Queue *q)
{
    int vRetorno{0};
    Node *r = q->first;
    vRetorno = r->value;
    q->first = q->first->next;

    if (q->first == nullptr)
        q->last = q->first;

    free(r);
    r = nullptr;

    return vRetorno;
}