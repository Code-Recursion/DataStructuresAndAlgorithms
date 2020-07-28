// Bubble sort
// Bubble sort is Adaptive and Stable sort
// the lightest elements bubbles up and heavier gets settled down

#include <iostream>
using namespace std;

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void InsertionSort(int Arr[], int size)
{
    int i, j, x;
    for (i = 1; i < size; i++)
    {
        j = i - 1;
        x = Arr[i];
        while (j > -1 && Arr[j] > x)
        {
            Arr[j + 1] = Arr[j];
            j--;
        }
        Arr[j + 1] = x;
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

    InsertionSort(Arr, size);
    Display(Arr, size);

    return 0;
}

// Analysis :

// Time :
// Pass : n - 1
// max no. of Swaps 1 + 2 + 3 + ... + n - 1 = O(n^2)
// no. of Comparison 1 + 2 + 3 + ... + n - 1 = O(n^2)
// O(n^2), Quadratic

// Splace : O(1), Constant