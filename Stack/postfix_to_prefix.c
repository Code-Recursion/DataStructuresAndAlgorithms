#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

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
        printf("Stack is Empty\n");
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

int Precedence(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else
        return 0;
}

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}

char *InfixToPosfix(char *infix)
{
    char *postfix;
    int i = 0, j = 0;
    int len = strlen(infix);
    postfix = (char *)malloc(sizeof(char) * (len + 2)); // +1 for null character
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (Precedence(infix[i]) > Precedence(top->data))
                Push(infix[i++]);
            else
                postfix[j++] = Pop();
        }
    }

    while (top != NULL)
        postfix[j++] = Pop();
    postfix[j] = '\0';
    return postfix;
}

int Eval(char *postfix)
{
    int i = 0;
    int x1, x2, r;
    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isOperand(postfix[i]))
            Push(postfix[i] - '0');
        else
        {
            x2 = Pop();
            x1 = Pop();
            switch (postfix[i])
            {
            case '+':
                r = x1 + x2;
                break;
            case '-':
                r = x1 - x2;
                break;
            case '*':
                r = x1 * x2;
                break;
            case '/':
                r = x1 / x2;
                break;
            }
            Push(r);
        }
    }
    return top->data;
}

int main()
{
    char *postfix = "234*+82/-";
    printf("Result of expression is : %d ", Eval(postfix));

    return 0;
}

// output :
// Result of expression is : 10
// time O(n)