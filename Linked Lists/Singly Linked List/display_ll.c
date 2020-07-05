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

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
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
int main()
{
    int A[] = {3, 5, 7, 10, 15};
    Create(A, 5);
    Display(first);
    printf("\n");
    RecursiveDisplay(first);
    return 0;
}

// Output :
// 3 5 7 10 15
// 15 10 7 5 3

// Time O(n)