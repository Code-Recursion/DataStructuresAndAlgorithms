// constructor has no return type
// constructor is called at the time of object creation

#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() // default constructor
    {
        length = 1;
        breadth = 1;
    }

    Rectangle(int newLength, int newBreadth); // overloaded constructor

    int areaOfRectangle();

    int paramerter();

    int getLength() // getter or accessor
    {
        return length;
    }

    void setLength(int newLength) // setter or mutator
    {
        length = newLength;
    }

    ~Rectangle(); // destructor to diallocate or free memory
};

Rectangle ::Rectangle(int newLength, int newBreadth)
{
    length = newLength;
    breadth = newBreadth;
}

int Rectangle::areaOfRectangle()
{
    return length * breadth;
}

int Rectangle ::paramerter()
{
    return 2 * (length + breadth);
}

Rectangle::~Rectangle()
{
    // deallocate or free allocated memory
}

int main()
{
    class Rectangle R(10, 5);
    cout << "Area : " << R.areaOfRectangle() << endl;
    cout << "Parameter : " << R.paramerter() << endl;
    cout << "Length : " << R.getLength() << endl;
    R.setLength(35);
    cout << "New Length : " << R.getLength() << endl;
}
