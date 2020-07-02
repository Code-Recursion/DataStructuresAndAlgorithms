#include <stdio.h>
int main()
{
    char A[] = "WeLcoMe";
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 'a' && A[i] <= 'z')
            A[i] -= 32;
        else if (A[i] >= 'A' && A[i] <= 'Z')
            A[i] += 32;
    }
    printf("%s", A);
    return 0;
}

// output
// wElCOmE

// Time : O(n)