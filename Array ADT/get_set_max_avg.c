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
    printf("\nElement in array : ");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

int get(struct Array arr, int index)
{
    if (index >= 0 && index <= arr.length)
        return arr.A[index];
    return -1;
}

int set(struct Array *arr, int index, int item)
{
    if (index >= 0 && index <= arr->length)
        arr->A[index] = item;
}

int avg(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
        sum += arr.A[i];
    return sum / arr.length;
}

int max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int main()
{
    struct Array arr = {{2, 4, 6, 8, 10}, 10, 5};

    Display(arr);
    printf("\nElement at given index is : %d ", get(arr, 2));
    printf("\nafter Set operation ");
    set(&arr, 2, 9);
    Display(arr);
    printf("\nAverage in array : %d", avg(arr));
    printf("\nMax in array : %d", max(arr));

    return 0;
}

// output

// Element in array : 2 4 6 8 10
// Element at given index is : 6
// after Set operation
// Element in array : 2 4 9 8 10
// Average in array : 6
// Max in array : 10

// Analysis

// get : O(1)  constant for all cases
// set : O(1)  constant for all cases
// max : O(n)  all cases
// avg : O(n)  all cases