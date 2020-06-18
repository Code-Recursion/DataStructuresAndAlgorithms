#include <iostream>
using namespace std;
int main()
{

    int A[] = {2, 5, 4, 6, 3, 5, 6, 6, 3, 8, 9, 10, 8};
    int size = sizeof(A) / sizeof(int);

    int low = 2;
    int high = 10;

    int H[high] = {0};

    for (int i = 0; i < size; i++)
    {
        H[A[i]]++;
    }
    for (int i = low; i <= high; i++)
    {
        if (H[i] > 1)
            cout << i << " appeared " << H[i] << " times " << endl;
    }
    return 0;
}

// O(n)