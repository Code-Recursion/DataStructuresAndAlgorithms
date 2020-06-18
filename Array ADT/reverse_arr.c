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
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse_one(struct Array *arr)
{
    int *B;
    int i, j;
    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i]; // reverse copy from A to B
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i]; // copy from B to A
}

void Reverse_two(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
        swap(&arr->A[i], &arr->A[j]);
}
int main()
{
    struct Array arr = {{2, 4, 6, 8, 10}, 5, 10};
    Display(arr);

    // Reverse_one(&arr);

    Reverse_two(&arr);

    printf("\n");

    Display(arr);
    return 0;
}

// Output:
// Elements in array : 2 4 6 8 10
// After Reverse Operation
// Elements in array : 10 8 6 4 2

// Analysis Time O(n) in all cases in both methods