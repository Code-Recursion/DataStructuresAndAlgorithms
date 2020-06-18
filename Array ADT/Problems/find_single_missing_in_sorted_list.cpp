#include <iostream>
using namespace std;
int main()
{
    int A[8] = {5, 6, 7, 8, 10, 11, 12, 13};
    int size = 8;
    int low = A[0];
    int high = A[size - 1];

    int diff = low - 0;
    for (int i = 0; i < size; i++)
    {
        if (A[i] - i != diff)
        {
            cout << "Missing number is : " << i + diff;
            break;
        }
    }
    return 0;
}

// Output :
// Missing number is : 9
// O(n)