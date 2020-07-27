#include <iostream>
#include "QueueCpp.h"

class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void CreateTree();
    void Preorder(Node *p);
    void Postorder(Node *p);
    void Inorder(Node *p);
    void Levelorder(Node *p);
    int Height(Node *root);
};

void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(100);

    printf("Enter root value : ");
    scanf("%d", &x);
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.Enqueue(root);

    while (!q.isEmpty())
    {
        p = q.Dequeue();
        printf("Enter left child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.Enqueue(t);
        }

        printf("Enter right child of %d : ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.Enqueue(t);
        }
    }
}

void Tree::Inorder(struct Node *p)
{
    if (p)
    {
        Preorder(p->lchild);
        printf("%d", p->data);
        Preorder(p->rchild);
    }
}
void Tree::Preorder(struct Node *p)
{
    if (p)
    {
        printf("%d", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Tree::Postorder(struct Node *p)
{
    if (p)
    {
        Preorder(p->lchild);
        Preorder(p->rchild);
        printf("%d", p->data);
    }
}

int Tree::Height(struct Node *root)
{
    int x = 0, y = 0;
    if (root = 0)
        return 0;
    x = Height(root->lchild);
    y = Height(root->rchild);

    if (x > y)
        return x + 1;
    else
        return y + 1;
}

int main()
{
    Tree t;
    t.CreateTree();
    t.Preorder(t.root);
    return 0;
}