#include <iostream>
using namespace std;
int sum_n(int n)
{
    if (n == 1)
        return 1;
    return sum_n(n - 1) + n;
}
int main()
{
    int n = 5;
    cout << sum_n(n);
}