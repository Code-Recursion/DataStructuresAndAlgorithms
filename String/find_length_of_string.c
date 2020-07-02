#include <stdio.h>
int main()
{
    char A[] = "Learning";
    int length = 0;

    for (int i = 0; A[i] != '\0'; i++)
    {
        length++;
    }
    printf("%d", length);
    return 0;
}

// output : 8
// O(n) linear