/*
    Tail Recursion
    the function calls itself in the end 
    it is executed at call time
    Tail Recursion uses stack and as a result it uses more space
    iterative / loop method is recommended then Tail recursion
*/
#include <stdio.h>
int fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
    }
}
int main()
{
    int n = 5;
    fun(n);
}
// Output :
// 5 4 3 2 1

// Analysis Time - O(n) Space - O(n)