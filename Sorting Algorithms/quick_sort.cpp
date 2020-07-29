// QuickSort is also known as Selection Exchange sort
// QuickSort is also known as Patition Exchange sort

#include <iostream>
using namespace std;
int Partition(int Arr[], int low, int high)
{
    int Pivot = Arr[low];
    int i = low, j = high;

    do
    {
        do
        {
            i++;
        } while (Arr[i] <= Pivot);

        do
        {
            j--;
        } while (Arr[j] > Pivot);

        if (i < j)
            swap(Arr[i], Arr[j]);
    } while (i < j);
    swap(Arr[low], Arr[j]);
    return j;
}

void QuickSort(int Arr[], int low, int high)
{
    int j;
    if (low < high)
    {
        j = Partition(Arr, low, high);
        QuickSort(Arr, low, j);
        QuickSort(Arr, j + 1, high);
    }
}

void Display(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << Arr[i] << " ";
}

int main()
{
    int Arr[] = {2, 7, 5, 4, 9, 8, 6, 1, 3};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    QuickSort(Arr, 0, size);
    Display(Arr, size);
}

// Time Analysis
// Best : O(nlogn) when partition process is continuously partitioning the list from mid
// Worst : O(n^2) if list is already sorted in either ascending and descending order
