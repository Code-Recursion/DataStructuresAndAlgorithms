/* combination using Pascal's Triangle
              1
             / \
            1   1
           / \ / \
          1   2   1
         / \ / \ / \
        1   3   3   1

    Can be represented as:

             0c0
            /   \
         1c0     1c0
        /   \   /   \
      2c0    2c1     2c2
     /   \  /   \   /   \
  3c0     3c1    3c2     3c3

*/

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
    if (n == r || r == 0)
        return 1;
    return ncr(n - 1, r - 1) + ncr(n - 1, r);
}

int main()
{
    cout << ncr(10, 2);
    return 0;
}
