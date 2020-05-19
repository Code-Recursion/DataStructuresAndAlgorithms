// Generic Class
// supports multiple data types

#include <iostream>
using namespace std;

template <class T>
class Arithematic
{
private:
    T A;
    T B;

public:
    Arithematic(T newA, T newB);
    T add();
    T sub();
};

template <class T>

Arithematic<T>::Arithematic(T newA, T newB)
{
    this->A = newA;
    this->B = newB;
}

template <class T>

T Arithematic<T>::add()
{
    return A + B;
}

template <class T>

T Arithematic<T>::sub()
{
    return A - B;
}

int main()
{
    Arithematic<int> AR1(15, 5);
    cout << "Sum : " << AR1.add() << endl;
    cout << "Sub : " << AR1.sub() << endl;

    Arithematic<float> AR2(12.6, 5.2);
    cout << "Sum : " << AR2.add() << endl;
    cout << "Sub : " << AR2.sub();
}

//  output :
//  Sum : 20
//  Sub : 10
