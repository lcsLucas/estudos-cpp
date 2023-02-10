//header guard
#ifndef QUEUE_H
#define QUEUE_H

struct Node
{
    int value;
    struct Node *next;
};

struct Queue
{
    Node *first;
    Node *last;
};

void inicialize(Queue *q);

Node *createNode(int newValue);

bool isEmpty(Queue *q);

int size(Queue *q);

void enqueue(Queue *q, int newValue);

int dequeue(Queue *q);

#endif