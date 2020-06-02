#include <iostream>
using namespace std;
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    cout << fib(5);
    return 0;
}

// analysis
// for n = 5, 15 calls
// O(2^n)