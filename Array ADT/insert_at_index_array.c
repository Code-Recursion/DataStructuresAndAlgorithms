#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[10];
    int length;
    int size;
};

void Display(struct Array arr)
{
    printf("Elements in array : ");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

void insert_at_index(struct Array *arr, int index, int item)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = item;
        arr->length++;
    }
}
int main()
{
    struct Array arr = {{2, 4, 8, 10, 12}, 5, 10};
    Display(arr);
    insert_at_index(&arr, -2, 6);
    Display(arr);
}

//output
// Elements in array : 2 4 8 10 12
//Elements in array : 2 4 6 8 10 12

// Time Complexity Analysis
// Best Case O(1)
// Worst Case (n)