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

void BubbleSort(int Arr[], int size)
{
    int flag = 0;
    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < size - i - 1; j++) // on every pass one comparision is reduced
        {
            if (Arr[j] > Arr[j + 1])
            {
                Swap(Arr[j], Arr[j + 1]);
                flag = 1; // turns the flag on if swapping is done
            }
        }

        if (flag == 0)
            return; // break if no swapping is done means list is already sorted
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

    BubbleSort(Arr, size);
    Display(Arr, size);

    return 0;
}

// Analysis :

// Time :
// Pass : n - 1
// max no. of Swaps 1 + 2 + 3 + ... + n - 1 = O(n^2)
// no. of Comparison 1 + 2 + 3 + ... + n - 1 = O(n^2)
// Best : O(n), Worst :O(n^2)

// Splace : O(1), Constant