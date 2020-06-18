#include <iostream>
using namespace std;
template <class T>

class Array
{
private:
    T *A;
    int size;
    int length;

public:
    Array() // constructor
    {
        size = 10;
        A = new T[size];
        length = 0;
    }
    Array(int sz) // parameterized constructor
    {
        size = sz;
        length = 0;
        A = new T[size];
    }

    ~Array()
    {
        delete[] A;
    }

    void Display();
    void Insert(int index, T item);
    void Delete(int index);
};

template <class T>
void Array<T>::Display()
{
    cout << "Elements in array : " << endl;
    for (int i = 0; i < length; i++)
        cout << A[i] << " ";
    cout << endl;
}
template <class T>
void Array<T>::Insert(int index, int item)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length - 1; i >= 0; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = item;
    }
    length++;
}
template <class T>
void Array<T>::Delete(int index)
{
    if (index >= 0 && index < length)
    {
        T x = A[index];
        for (int i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
}

int main()
{
    Array<int> arr(10); // array object
    arr.Insert(0, 5);
    arr.Insert(0, 6);
    arr.Insert(0, 8);
    arr.Insert(0, 9);
    arr.Insert(0, 10);
    arr.Display();
    arr.Delete(9);
    arr.Display();
    return 0;
}