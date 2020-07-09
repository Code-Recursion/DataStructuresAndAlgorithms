#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void Push(int x);
    int Pop();
    void Display();
};

void Stack ::Push(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Stack is Full\n";
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack ::Pop()
{
    int x = -1;
    if (top == NULL)
        cout << "Stack is Empty\n";
    else
    {
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}

void Stack ::Display()
{
    Node *p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    cout << endl;
}

int main()
{
    Stack stk;
    stk.Push(10);
    stk.Push(20);
    stk.Push(30);
    stk.Display();

    cout << "popped : " << stk.Pop();

    return 0;
}