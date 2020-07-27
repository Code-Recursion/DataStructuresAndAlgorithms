#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int Front;
    int Rear;
    int *Q;
};

void Create(struct Queue *q, int size)
{
    q->size = size;
    q->Front = q->Rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void Enqueue(struct Queue *q, int x)
{
    if (q->Rear == q->size - 1)
        printf("Queue is Full\n");
    else
    {
        q->Rear++;
        q->Q[q->Rear] = x;
    }
}

int Dequeue(struct Queue *q)
{
    int x = -1;
    if (q->Front == q->Rear)
        printf("Queue si Empty\n");
    else
    {
        q->Front++;
        x = q->Q[q->Front];
    }
    return x;
}

void Display(struct Queue q)
{
    for (int i = q.Front + 1; i <= q.Rear; i++)
        printf("%d ", q.Q[i]);
    printf("\n");
}

int main()
{
    struct Queue q;
    Create(&q, 5);
    Enqueue(&q, 10);
    Enqueue(&q, 20);
    Enqueue(&q, 30);
    Enqueue(&q, 40);
    Enqueue(&q, 50);

    Display(q);

    printf("Dequeued : %d\n", Dequeue(&q));
    Display(q);

    return 0;
}

// Ouput :
// 10 20 30 40 50
// Dequeued : 10
// 20 30 40 50

// Analysis :
// Enqueue, Dequeue : O(1)