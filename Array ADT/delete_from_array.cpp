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
         << "Array : ";
    for (int i = 0; i < Arr.length; i++)
        cout << Arr.A[i] << " ";

    cout << endl;
}
void Delete(struct Array *Arr, int index)
{
    if (index >= 0 && index <= Arr->length)
        for (int i = index; i < Arr->length; i++)
            Arr->A[i] = Arr->A[i + 1];
    Arr->length--;
}

int main()
{
    struct Array Arr;
    Arr.size = 10;
    int n;
    Arr.A = new int[Arr.size];

    Arr.length = 0;

    cout << "Enter len of array : ";
    cin >> n;
    Arr.length = n;
    cout << endl
         << "Enter all Elements : ";

    for (int i = 0; i < n; i++)
        cin >> Arr.A[i];

    Display(Arr);

    int index;
    cout << endl
         << "Enter index to delete : ";
    cin >> index;

    Delete(&Arr, index);

    Display(Arr);
    return 0;
}

// Best O(1)
// Worst O(n)