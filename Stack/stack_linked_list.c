#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void Push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));

    if (t == NULL) // stack is full or heap is full
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Pop()
{
    struct Node *t;
    int x = -1;
    if (top == NULL)
        printf("Stack is Empty");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p;
    p = top;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Display();
    printf("\npopped : %d", Pop());
    return 0;
}

// Output :
// 40 30 20 10
// popped : 40
