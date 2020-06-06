// add or append an item in array at the end

#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array Arr)
{
    cout << endl
         << "Elements in array : ";
    for (int i = 0; i < Arr.length; i++)
        cout << Arr.A[i] << " ";

    cout << endl;
}

void Append(struct Array *Arr, int element)
{
    if (Arr->length < Arr->size)
        Arr->A[Arr->length++] = element;
}

int main()
{
    struct Array Arr;
    int n;
    cout << "Enter size of Array : ";
    cin >> Arr.size;
    Arr.A = new int[Arr.size];
    Arr.length = 0;

    cout << endl
         << "Enter Length of Array : ";
    cin >> n;
    cout << endl
         << "Enter all elements : ";
    for (int i = 0; i < n; i++)
        cin >> Arr.A[i];

    Arr.length = n;
    cout << endl;

    Display(Arr);

    int element;
    cout << endl
         << "Enter element to add/append : ";
    cin >> element;

    Append(&Arr, element);

    Display(Arr);

    return 0;
}


// O(1)