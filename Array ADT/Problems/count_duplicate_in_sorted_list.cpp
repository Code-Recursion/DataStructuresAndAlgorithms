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
        6,
        8,
        9,
        10,
        10,
    };

    int size = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < size - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            int j = i + 1;
            while (A[j] == A[i]) // executes negligible times hence ignored
            {
                j++;
            }
            cout << A[i] << " appeared " << j - i << " times" << endl;
            i = j - 1;
        }
    }
    return 0;
}

// output - 2 appeared 2 times
// 4 appeared 2 times
// 6 appeared 4 times
// 10 appeared 2 times

// O(n)