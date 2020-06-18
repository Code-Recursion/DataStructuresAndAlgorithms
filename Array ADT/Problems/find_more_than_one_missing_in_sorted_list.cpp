#include <iostream>
using namespace std;
int main()
{
    int A[10] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18};
    int size = 10;
    int low = A[0];
    int high = A[size - 1];
    int diff = low - 0;
    for (int i = 0; i < size; i++)
    {
        if (A[i] - i != diff)
        {
            while (diff < A[i] - i)
            {
                cout << "missing : " << i + diff << endl;
                diff++;
            }
        }
    }
    return 0;
}