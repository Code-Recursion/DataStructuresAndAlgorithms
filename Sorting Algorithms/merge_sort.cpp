#include <bits/stdc++.h>
using namespace std;

void Merge(int A[], int low, int mid, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    int B[high + 1];

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    for (; i <= mid; i++)
        B[k++] = A[i];

    for (; j <= high; j++)
        B[k++] = A[j];

    // copy back to A
    for (i = low; i <= high; i++)
        A[i] = B[i];
}

void IterativeMergeSort(int A[], int size)
{
    int Pass, i, low, mid, high;
    for (Pass = 2; Pass <= size; Pass * 2)
    {
        for (i = 0; i + Pass - 1 < size; i = i + Pass)
        {
            low = i;
            high = i + Pass - 1;
            mid = (low + high) / 2;
            Merge(A, low, mid, high);
        }
    }
    if (Pass / 2 < size)
        Merge(A, 0, Pass / 2 - 1, size - 1);
}

void RecursiveMergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        RecursiveMergeSort(A, low, mid);
        RecursiveMergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

void Display(int Arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
        cout << Arr[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Arr[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    int low = 0;
    int high = size - 1;
    // int mid = (low + high) / 2;

    // Merge(Arr, 0, mid, size);
    // IterativeMergeSort(Arr, size);

    RecursiveMergeSort(Arr, low, high);

    Display(Arr, size);

    return 0;
}
