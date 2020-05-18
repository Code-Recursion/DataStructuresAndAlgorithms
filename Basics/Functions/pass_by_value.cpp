/* Pass By Value
    change in formal parameters
    will not effect / modify
    the values of actual parameters
    note : this swap won't work
*/
#include <iostream>
using namespace std;

void swap(int x, int y) // formal parameters
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
    swap(&a, &b); // actual parameters
    cout << "After : " << a << " " << b;
}
/* output 
5 10
5 10 
*/