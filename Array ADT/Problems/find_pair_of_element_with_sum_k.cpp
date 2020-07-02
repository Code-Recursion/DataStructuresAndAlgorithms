// find pair of numbers with k sum
#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 8, 3, 4, 8, 22, 1, 4, 10, 9, 6, 5, 6};
    int k = 10;
    int size = sizeof(A) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (A[i] + A[j] == k)
                cout << A[i] << " + " << A[j] << " = " << k << endl;
        }
    }
    return 0;
}
// Output
// 2 + 8 = 10
// 2 + 8 = 10
// 8 + 2 = 10
// 4 + 6 = 10
// 4 + 6 = 10
// 8 + 2 = 10
// 1 + 9 = 10
// 4 + 6 = 10
// 4 + 6 = 10
// 9 + 1 = 10
// 6 + 4 = 10
// 6 + 4 = 10
// 5 + 5 = 10
// 6 + 4 = 10
// 6 + 4 = 10

// Time - O(n^2) Quadratic (Bad)