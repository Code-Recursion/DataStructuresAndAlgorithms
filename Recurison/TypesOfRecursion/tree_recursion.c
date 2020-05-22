/*
    Tree Recursion
    the function calls itself more than once
*/
#include <stdio.h>
int fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
        fun(n - 1);
    }
}
int main()
{
    int n = 3;
    fun(n);
}

// output :
// 3 2 1 1 2 1 1

// Analysis  Time - O(n) Space - O(2^n)