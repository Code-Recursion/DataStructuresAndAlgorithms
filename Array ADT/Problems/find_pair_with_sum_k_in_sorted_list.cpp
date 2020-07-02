#include <iostream>
using namespace std;
int main()
{

    int A[10] = {1, 3, 4, 5, 6, 7, 8, 10, 12, 14};
    int n = 10;
    int i = 0, j = n - 1;
    int k = 10;
    while (i < j)
    {
        if (A[i] + A[j] == k)
        {
            cout << A[i] << " + " << A[j] << " = " << k << endl;
            i++;
            j--;
        }
        else if (A[i] + A[j] > k)
        {
            j--;
        }
        else
            i++;
    }
    return 0;
}

// output
// 3 + 7 = 10
// 4 + 6 = 10

// Linear time