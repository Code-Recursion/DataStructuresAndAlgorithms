// Selection sort
// Selection sort is neither Adaptive nor a Stable sort

#include <iostream>
using namespace std;

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void SelectionSort(int Arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 2; i++)
    {
        for (j = i + 1; j < size - 1; j++)
        {
            if (Arr[i] > Arr[j])
                Swap(Arr[i], Arr[j]);
        }
    }
}

void Display(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << Arr[i] << " ";
}
int main()
{
    int Arr[] = {3, 6, 4, 9, 2, 8, 12, 10};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    SelectionSort(Arr, size);
    Display(Arr, size);

    return 0;
}

// Analysis :

// Time :
// Pass : n - 1
// max no. of swaps : n - 1 = O(1)
// no. of Comparison 1 + 2 + 3 + ... + n - 1 = O(n^2)
// O(n^2), Quadratic in best and worst cases

// Splace : O(1), Constant