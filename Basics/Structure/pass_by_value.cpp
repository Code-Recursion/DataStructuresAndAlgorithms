#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

void area_of_rectangle(struct Rectangle R)
{
    cout << R.length * R.breadth;
    R.breadth = 20; // modify the value of breadth won't change the actual structure
}

int main()
{
    struct Rectangle R;
    R.length = 5;
    R.breadth = 12;
    area_of_rectangle(R);
    cout << endl
         << R.breadth;
}

/*
    Output:
    60
    12
*/