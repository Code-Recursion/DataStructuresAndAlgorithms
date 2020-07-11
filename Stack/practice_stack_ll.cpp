#include <bits/stdc++.h>
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
    int isEmpty();
    int isFull();
    int Peek(int loc);
};

void Stack ::Push(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Stack Overflow" << endl;
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
        cout << "Stack Underflow" << endl;

    else
    {
        Node *t = new Node; // error ana chaiye *t reallocateed
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

void Stack ::Display()
{
    Node *p = new Node;
    p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int Stack ::isEmpty()
{
    if (top == NULL)
        return 1;
    return 0;
}

int Stack ::Peek(int pos)
{
    Node *p = top;
    for (int i = 0; p != NULL && i < pos - 1; i++)
        p = p->next;
    if (p)
        return p->data;
    else
        return -1;
}
int main()
{
    struct Stack st;
    st.Push(5);
    st.Push(10);
    st.Push(15);
    st.Push(20);
    st.Push(25);

    st.Display();
    cout << "popped : " << st.Pop() << endl;
    st.Display();
    cout << st.isEmpty();
    cout << endl
         << "Element at given index is :" << st.Peek(1) << endl;
}

// output :
// 25 20 15 10 5
// popped : 25
// 20 15 10 5
// 0
// Element at given index is :20