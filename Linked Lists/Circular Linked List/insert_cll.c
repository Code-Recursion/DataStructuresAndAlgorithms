#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * Head;

void Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *h)
{
    do
    {
        printf("%d ", h->data);
        h = h->next;
    } while (h != Head);
}

void RDisplay(struct Node *h)
{
    static int flag = 0;
    if (h != Head || flag == 0)
    {
        flag = 1;
        printf("%d ", h->data);
        RDisplay(h->next);
    }
    flag = 0;
}

int Length(struct Node *p)
{
    int len = 0;
    do
    {
        len++;
        p = p->next;
    } while (p != Head);
    return len;
}

void Insert(struct Node *p, int index, int x)
{
    if (index < 0 || index > Length(Head))
        return;
    struct Node *t;
    int i;
    if (index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        if (Head == NULL) // first node
        {
            Head = t;
            Head->next = Head;
        }
        else
        {
            while (p->next != Head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{

    int A[5] = {2, 3, 4, 5, 6};
    Create(A, 5);
    Insert(Head, 5, 10);
    Display(Head);
    return 0;
}

// 2 3 4 5 6 10