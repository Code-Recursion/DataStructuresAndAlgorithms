/*
    Indirect Recursion
    the function calls itself in the form of cycle // circular manner
*/
#include <stdio.h>

void funB(int n);
void funA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 1)
    {
        printf("%d ", n);
        funA(n / 2);
    }
}
int main()
{
    int n = 20;
    funA(n);
}
// Output :
// 20 19 9 8 4 3 1
