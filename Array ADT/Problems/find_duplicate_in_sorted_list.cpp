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

    int size = sizeof(A) / sizeof(int);
    int lastDuplicate = 0;
    for (int i = 0; i < size; i++)
    {
        if ((A[i] == A[i + 1]) && (A[i] != lastDuplicate))
        {
            lastDuplicate = A[i];
            cout << "Duplicate : " << A[i] << endl;
        }
    }
    return 0;
}