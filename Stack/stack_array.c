#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;
};

void Create(struct Stack *st)
{
    printf("Enter size of stack : ");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}

void Display(struct Stack st)
{
    int i;
    printf("Stack : ");
    for (i = st.top; i >= 0; i--)
    {
        printf("%d ", st.S[i]);
    }
    printf("\n");
}

void Push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
        printf("Stack Overflow!\n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int Pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        printf("Stack Underflow!\n");
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int Peek(struct Stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0) // invalid index
        printf("Invalid index");
    x = st.S[st.top - pos + 1];
    return x;
}

int isEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}

int isFull(struct Stack st)
{
    return st.top == st.size - 1;
}

int StackTop(struct Stack st)
{
    if (!isEmpty(st))
        return st.S[st.top];
    return -1;
}

int main()
{
    struct Stack st;
    Create(&st);

    Push(&st, 10);
    Push(&st, 20);
    Push(&st, 30);
    Push(&st, 40);

    printf("Element at given index is : %d \n", Peek(st, 2));

    Display(st);
    return 0;
}

//Output :
// Enter size of stack : 5
// Element at given index is : 30
// Stack : 40 30 20 10

// Analysis
// All operations on stack takes Constant time i.e O(1)