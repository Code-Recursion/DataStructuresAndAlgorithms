/*
 Pass By Address , values are actually swapped
 Pointers are address variables
 Pointers take the same memory as its data type
 use : accessing heap, accessing external resources, parameter passing
*/
#include <iostream>
using namespace std;

void swap(int *x, int *y) // formal parameters
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b, c;
    a = 5;
    b = 10;
    cout << "Before : " << a << " " << b << endl;
    swap(&a, &b); // actual parameters
    cout << "After : " << a << " " << b;
}

/*
5 10
10 5
*/