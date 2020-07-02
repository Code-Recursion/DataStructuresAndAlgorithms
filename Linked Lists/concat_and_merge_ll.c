#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;

void Create1(int A[], int n)
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
void Create2(int A[], int n)
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void RecursiveDisplay(struct Node *p)
{
    if (p != NULL)
    {
        RecursiveDisplay(p->next);

        /* the below statement executes at return time and 
        hence elements are displayed in reverse order */

        printf("%d ", p->data);
    }
}

void Concat(struct Node *p, struct Node *q)
{
    third = p;
    while (p->next != NULL)
        p = p->next;
    p->next = q;
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }

    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }

    if (p)
        last->next = p;
    if (q)
        last->next = q;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    int B[] = {5, 152, 252, 352, 452};

    Create1(A, 5);
    Create2(B, 5);

    // Concat(first, second);
    // printf("Concatinated List : ");
    // Display(third);

    Merge(first, second);
    printf("Merged List : ");
    Display(third);

    return 0;
}

// Concatinated List : 50 40 10 30 20 1 2 3 4 5
// Time : O(n)
// Space : Constant

// Merged List : 5 10 20 30 40 50 152 252 352 452
// Time : O(n + m) or O(n)
// Space : Constant
