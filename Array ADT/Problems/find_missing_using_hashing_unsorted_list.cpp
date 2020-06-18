#include <iostream>
using namespace std;
int main()
{
    int A[10] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};

    int size = 10;
    int low = A[0];
    int high = 12;

    int H[high] = {0};

    for (int i = 0; i < size; i++)
        H[A[i]]++;

    for (int i = low; i <= high; i++)
    {
        if (H[i] == 0)
            cout << "missing : " << i << endl;
    }
    return 0;
}