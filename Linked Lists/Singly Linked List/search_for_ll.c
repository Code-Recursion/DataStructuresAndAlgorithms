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
    printf("List : ");
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

// Improved Linear Search Implimentation
struct Node *LinearSearch(struct Node *p, int key)
{
    struct Node *q = NULL;

    while (p != NULL)
    {
        if (key == p->data) // implimentation of move to head/front
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

struct Node *RLinearSearch(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return RLinearSearch(p->next, key);
}

int main()
{
    struct Node *temp;

    int A[] = {3, 5, 7, 10, 35, 8, 12, 2};
    Create(A, 8);

    temp = LinearSearch(first, 7);
    temp = LinearSearch(first, 12);

    if (temp)
        printf("Key is found : %d \n", temp->data);
    else
        printf("Key not found");
    Display(first);

    return 0;
}

// Output:
// Key is found : 35

// Time : O(n)