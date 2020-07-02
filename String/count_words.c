#include <stdio.h>
int main()
{
    char A[] = "Learning is fun";
    int words = 1;
    for (int i = 0; i < A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i] - 1 != ' ')
            words += 1;
    }
    printf("words : %d", words);
    return 0;
}

// output :
// words : 3

// linear time