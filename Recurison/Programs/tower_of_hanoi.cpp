#include <iostream>
using namespace std;

// TOH(no. of disks, tower 1, tower 2, tower3)

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        static int i = 0;
        cout << "Step " << ++i << " (" << A << "," << C << ")" << endl;
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    TOH(64, 1, 2, 3);
    return 0;
}

// Analysis
// Time O(2^n)