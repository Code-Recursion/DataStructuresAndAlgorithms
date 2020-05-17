/*
    functions are set of related instructions
    it provides modularity to the program also called procedure
*/
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int x = 5, y = 10;
    int z = add(x, y);
    cout << z;
}

// output:
// 15