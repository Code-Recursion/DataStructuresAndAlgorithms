/*
    Head Recursion
    the function calls itself at the top 
    processing is done at return time
*/
#include <stdio.h>
int fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        printf("%d ", n);
    }
}
int main()
{
    int n = 5;
    fun(n);
}

//  output :
//  1 2 3 4 5

//  Analysis Time - O(n) Space - O(n)