// Generic Class
// supports multiple data types

#include <iostream>
using namespace std;

class Arithematic
{
private:
    int A;
    int B;

public:
    Arithematic(int newA, int newB);
    int add();
    int sub();
};

Arithematic::Arithematic(int newA, int newB)
{
    this->A = newA;
    this->B = newB;
}

int Arithematic ::add()
{
    return A + B;
}
int Arithematic ::sub()
{
    return A - B;
}

int main()
{
    Arithematic AR(15, 5);
    cout << "Sum : " << AR.add() << endl;
    cout << "Sub : " << AR.sub();
}

//  output :
//  Sum : 20
//  Sub : 10
