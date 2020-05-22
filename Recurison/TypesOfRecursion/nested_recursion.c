/*
    Neseted Recursion
    a recursive function in which function
    pass  parameter as recursive call
*/
#include <stdio.h>
int fun(int n)
{
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11));
}
int main()
{
    int n = 95;
    printf("%d", fun(n));
}

// Output :
// 91
