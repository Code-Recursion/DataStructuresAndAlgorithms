#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
};
class Stack
{
private:
    Node *top;

public:
    Stack();
    ~Stack();
    void Push(char x);
    char Pop();
    int isEmpty();
};

Stack ::Stack()
{
    top = NULL;
}

Stack::~Stack()
{
    Node *p = new Node;
    while (top)
    {
        top = top->next;
        delete p;
        p = top;
    }
}

void Stack ::Push(char x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Stack Overflow!";
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char Stack ::Pop()
{
    Node *p;
    char x = -1;
    if (top == NULL)
        cout << "Stack Underflow!" << endl;
    else
    {
        p = top;
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}
int Stack ::isEmpty()
{
    return top ? 0 : 1;
}

int isBalanced(char *exp)
{
    Stack stk;
    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(')
            stk.Push(exp[i]);
        else if (exp[i] == ')')
        {
            if (stk.isEmpty())
            {
                return false;
            }
            else
                stk.Pop();
        }
    }
    return stk.isEmpty() ? true : false;
}

int main()
{
    char E[] = "(a+b)*(c+d)";
    cout << isBalanced(E) << endl;
}