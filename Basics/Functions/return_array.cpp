/*
    Arrays can only be passed through their address
    if passed through their values all the data elements 
    are needed to be copied which is time consuming for compiler

    therefore actual array will be modified
*/

#include <iostream>
using namespace std;
void modifyArray(int *A, int size) // this A pointer points to the Arr[5] in Stack
{
    for (int i = 0; i < size; i++)
    {
        A[i]++;
    }
}
int main()
{
    int Arr[] = {3, 5, 7, 9, 11}; // Arr[5] is created in Stack
    int size = sizeof(Arr) / sizeof(int);
    modifyArray(Arr, size);
    for (int i = 0; i < size; i++)
        cout << Arr[i] << " ";
}