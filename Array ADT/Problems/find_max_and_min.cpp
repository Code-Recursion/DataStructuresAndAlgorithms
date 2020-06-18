#include <iostream>
using namespace std;
int main()
{
    int A[] = {
        2,
        5,
        6,
        8,
        3,
        9,
        16,
        10,
        14,
        12,
    };
    int min,
        max;
    min = max = A[0];

    int size = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < size; i++)
    {
        if (A[i] > max)
            max = A[i];
        else if (A[i] < min)
            min = A[i];
    }
    cout << "max : " << max << endl
         << "min : " << min;

    return 0;
}

// output
// max : 16
// min : 2

//Analysis
// time O(n)