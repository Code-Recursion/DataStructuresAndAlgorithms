#include <iostream>
using namespace std;

class Queue
{
private:
    int Size;
    int Front;
    int Rear;
    int *Q;

public:
    Queue() // default
    {
        Front = Rear = -1;
        Size = 10;
        Q = new int[Size];
    }

    Queue(int size) // parameterized
    {
        Front = Rear = -1;
        Size = size;
        Q = new int[Size];
    }

    void Enqueue(int x);
    int Dequeue();
    void Display();
};

void Queue ::Enqueue(int x)
{
    if (Rear == Size - 1)
        printf("Queue is Full\n");
    else
    {
        Rear++;
        Q[Rear] = x;
    }
}

int Queue ::Dequeue()
{
    int x = -1;
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
int main()
{
    Queue q(5);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);

    q.Display();

    printf("Dequeued : %d\n", q.Dequeue());
    q.Display();

    return 0;
}
// Output
// 10 20 30 40 50
// Dequeued : 20
// 20 30 40 50