#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Create(int A[], int n)
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

int RecursiveCount(struct Node *p)
{
    int count = 0;
    if (p == 0)
        return 0;
    return RecursiveCount(p->next) + 1;
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    Create(A, 5);
    printf("Number of nodes are : %d ", RecursiveCount(first));
    return 0;
}

// Output :
// Number of nodes are : 5

// Analysis

// Iterative
// Time O(n), Space : Constant

// Recursive
// Time O(n), Space : O(n)