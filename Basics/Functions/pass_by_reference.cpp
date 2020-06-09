/* Pass By Reference , values are actually swapped
   References are Alias / nickName given to a variable 
   Reference don't take additionall Space
*/
#include <iostream>
using namespace std;

void swap(int &x, int &y) // formal parameters
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b, c;
    a = 5;
    b = 10;
    cout << "Before : " << a << " " << b << endl;
    swap(a, b); // actual parameters
    cout << "After : " << a << " " << b;
}
/* output :
5 10
10 5
*/