#include <stdio.h>
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

void insert_in_sorted_list(struct Array *arr, int item)
{
    if (arr->length == arr->size)
        return;
    int i = arr->length - 1;
    while (arr->A[i] > item)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = item;
    arr->length++;
}
int main()
{
    struct Array arr = {{2, 4, 6, 8, 10}, 5, 10};
    Display(arr);
    insert_in_sorted_list(&arr, 5);
    printf("After insertion\n");
    Display(arr);
}

// output
// Elements in array : 2 4 6 8 10
// After insertion
// Elements in array : 2 4 5 6 8 10


