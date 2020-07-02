#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int isSorted(struct Node *p)
{
    int x = -65536;

    while (p != NULL)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }

        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}

int Count(struct Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

void Reverse1(struct Node *p) // Reverse copy using array
{
    int *A;
    struct Node *q = p;

    A = (int *)malloc(sizeof(int) * Count(p));

    int i = 0;
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }

    q = p;
    i--; // move to the last node
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void Reverse2(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Reverse3(struct Node *q, struct Node *p)
{
    if (p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
        first = q;
}

int main()
{

    int A[] = {10, 20, 20, 20, 30, 40, 40, 50};
    create(A, 8);

    // Reverse1(first);       Reverse Copy using extra Array
    // Reverse2(first);       Reverse Links using Sliding Pointers
    Reverse3(NULL, first); // Reverse Links Using Recursion

    Display(first);

    return 0;
}

// Ouput : 50 40 40 30 20 20 20 10

