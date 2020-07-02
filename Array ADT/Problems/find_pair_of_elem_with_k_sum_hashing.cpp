// using Hashing
#include <iostream>
using namespace std;
int main()
{

    int A[] = {
        6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int k = 10;

    int size = sizeof(A) / sizeof(int);

    int low = 2;
    int high = 16;

    int H[high] = {0};

    for (int i = 0; i < size; i++)
    {
        if (H[k - A[i]] != 0)
        {
            cout << A[i] << " + " << k - A[i] << " = " << k << endl;
        }
        H[A[i]]++;
    }

    return 0;
}