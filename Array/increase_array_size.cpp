#include <iostream>
using namespace std;

int main()
{

    int *A = new int[5];
    int *B = new int[10];
    A[0] = 2;
    A[1] = 4;
    A[2] = 6;
    A[3] = 8;
    A[4] = 10;

    for (int i = 0; i < 5; i++)
        B[i] = A[i];
    A = B;
    B = NULL;

    for (int i = 0; i < 10; i++)
        cout << A[i] << ' ';

    return 0;
}