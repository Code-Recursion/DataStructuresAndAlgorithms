// Array as Abstract Data Type
// ADT has two properties
// 1.) Declaration (most of the languages has array by default)
// 2.) Operation - The operation must be defined

#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[100];
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("\nElement in array are : ");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

// int BinarySearchIterative(struct Array arr, int key)
// {
//     int low, mid, high;
//     low = 0;
//     high = arr.length - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (key == arr.A[mid])
//             return mid;
//         else if (key > arr.A[mid])
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

int BinarySearchRecursive(int a[], int low, int high, int key)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return BinarySearchRecursive(a, low, mid - 1, key);
        else
            return BinarySearchRecursive(a, mid + 1, high, key);
    }
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6, 7, 8}, 10, 7};

    Display(arr);
    // printf("\nSearch Successful item found at index : %d", BinarySearchIterative(arr, 6));
    printf("\nSearch Successful item found at index : %d", BinarySearchRecursive(arr.A, 0, arr.length, 5));
    return 0;
}

// Time Complexity Analysis
// Iterative & Recursive
// best : O[1]
// average : O[logn]
// worst : O[logn]