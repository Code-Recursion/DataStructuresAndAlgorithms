// create array in heap memory
// function returning array
// pointer only occupies the size as the size of its data type

#include <iostream>
using namespace std;

int *fun(int n) // or int [] fun(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}
int main()
{
    int *A;
    A = fun(5);
    A[0] = 123;
    cout << sizeof(A) << endl;
    cout << sizeof(int) << endl;
    cout << A[0];
}

// output
/*
    4
    4 (sizeof int depends upon O.S)
    123
*/
