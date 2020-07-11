#include <stdio.h>
#include <stdlib.h>
#include <cstring

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void Push(char x)
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

char Pop()
{
    struct Node *t;
    char x = -1;
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

int isBalanced(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            Push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            Pop();
        }

        if (top == NULL)
            return 1;
        else
            return 0;
    }
}

int main()
{
    char *exp = "((a+b)*(c-d)))";

    printf("%d ", isBalanced(exp));
    return 0;
}

// Output :
// 40 30 20 10
// popped : 40
