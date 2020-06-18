#include <iostream>
using namespace std;
int main()
{
    int A[] = {8, 3, 6, 4, 5, 6, 8, 2, 7};
    int size = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int count = 1;
        if (A[i] != -1)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (A[j] == A[i])
                {
                    count++;
                    A[j] = -1;
                }
            }
            if (count > 1)
                cout << A[i] << " appeared " << count << " times" << endl;
        }
    }
    return 0;
}
// output
// 8 appeared 2 times
// 6 appeared 2 times

// Time Analysis :
// O(n^2)

// Space
// O(n)
