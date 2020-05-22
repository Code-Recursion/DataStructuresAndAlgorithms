#include <stdio.h>

int fun1(int n)
{
    if (n > 0)
    {
        return fun1(n - 1) + n;
    }
    return 0;
}
static int x = 0;
int fun2(int n)
{
    if (n > 0)
    {
        x++;
        return fun2(n - 1) + x;
    }
    return 0;
}
int main()
{
    int result1, result2;
    result1 = fun1(5);
    result2 = fun2(5);
    printf("%d\n", result1);
    printf("%d", result2);
}

// fun 2 = output 15 sum of first n natural no.s;
// fun 1 = output 25;