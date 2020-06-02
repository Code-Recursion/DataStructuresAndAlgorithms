#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int ncr(int n, int r)
{
    int term_1, term_2, term_3;
    term_1 = fact(n);
    term_2 = fact(r);
    term_3 = fact(n - r);
    return term_1 / (term_2 * term_3);
}
int main()
{
    cout << ncr(5, 3);
    return 0;
}

// Time O(n)