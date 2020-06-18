// finding duplicates and counting them using Hashing

#include <iostream>
using namespace std;
int main()
{

    int A[] = {
        2,
        2,
        3,
        4,
        4,
        5,
        6,
        6,
        6,
        8,
        9,
        10,
        10,
    };

    int low = 2;
    int high = 10;
    int H[high] = {0};
    int size = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < size; i++)
    {
        H[A[i]]++;
    }

    for (int i = 0; i <= high; i++)
    {
        if (H[i] > 1)
            cout << i << " appeared " << H[i] << " times" << endl;
    }

    return 0;
}

// O(n)