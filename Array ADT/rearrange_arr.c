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
    int i;
    printf("\nElements are : ");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void rearrange(struct Array *arr)
{
    int i = 0, j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}

int main()
{
    struct Array arr = {{-2, 5, 6, -4, 3, -1, 0, -6}, 8, 10};
    Display(arr);
    rearrange(&arr);
    Display(arr);
}

// output
// Elements are : -2 5 6 -4 3 -1 0 -6
// Elements are : -2 -6 -1 -4 3 6 0 5

// Time Analysis
//  O[n] in all cases