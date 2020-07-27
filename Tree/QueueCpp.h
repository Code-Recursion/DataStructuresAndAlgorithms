#include <iostream>
#include <stdio.h>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue
{
private:
    int Front;
    int Rear;
    int Size;
    Node **Q;

public:
    Queue() // default
    {
        Front = Rear = -1;
        Size = 10;
        Q = new Node *[Size];
    }

    Queue(int size) // parameterized
    {
        Front = Rear = -1;
        Size = size;
        Q = new Node *[Size];
    }

    void Enqueue(Node *x);
    Node *Dequeue();
    int isEmpty()
    {
        return Front == Rear;
    }
    void Display();
};

void Queue ::Enqueue(Node *x)
{
    if (Rear == Size - 1)
        printf("Queue is Full\n");
    else
    {
        Rear++;
        Q[Rear] = x;
    }
}

Node *Queue ::Dequeue()
{
    Node *x = NULL;
    if (Rear == Front)
        printf("Queue is Empty\n");
    else
    {
        Front++;
        x = Q[Front + 1];
    }

    return x;
}

void Queue ::Display()
{
    for (int i = Front + 1; i <= Rear; i++)
        printf("%d ", Q[i]);
    printf("\n");
}
