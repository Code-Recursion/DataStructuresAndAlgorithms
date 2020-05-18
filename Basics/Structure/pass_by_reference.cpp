#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

void changeLength(struct Rectangle &R, int newLength)
{
    R.length = newLength; // modify the value of breadth in actual structure
}

int main()
{
    struct Rectangle R;
    R.length = 5;
    R.breadth = 12;

    cout << R.length << endl;
    cout << R.breadth << endl;

    changeLength(R, 30);

    cout << R.length << endl;
    cout << R.breadth;
}

/*
    Output:
    5
    12
    30
    12
*/