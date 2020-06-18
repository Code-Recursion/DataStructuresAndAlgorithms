//Finding single missing number in first n natural numbers

#include <iostream>
using namespace std;
int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    int n = 10;
    int s = n * (n + 1) / 2; // sum of first n natural numbers
    int arraySum = 0;
    for (int i = 0; i < 10; i++)
        arraySum += A[i];
    cout << "Missing number is : " << s - arraySum;
    return 0;
}
// Output :
// Missing number is : 8

// Time : Constant