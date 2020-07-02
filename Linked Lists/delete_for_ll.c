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
    printf("\nList : ");
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
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

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1;
    if (index < 0 || index > Count(p))
        return -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    Create(A, 5);
    Display(first);

    printf("\nDeleted : %d \n", Delete(first, 4));
    printf("Deleted : %d ", Delete(first, 2));

    Display(first);

    return 0;
}

// Output : List : 10 20 30 40 50
// Deleted : 40
// Deleted : 20
// List : 10 30 50
// Time => Best : O(1), Worst : O(n)