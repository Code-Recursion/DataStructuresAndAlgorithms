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

int sum(struct Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int RecursiveSum(struct Node *p)
{
    int sum = 0;
    if (p == NULL)
        return 0;
    return p->data + RecursiveSum(p->next);
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    Create(A, 5);
    printf("sum of nodes are : %d ", RecursiveSum(first));
    return 0;
}

// Output :
// sum of nodes is : 40

// Analysis

// Iterative
// Time O(n), Space : Constant

// Recursive
// Time O(n), Space : O(n) since n activation records in stack are created


