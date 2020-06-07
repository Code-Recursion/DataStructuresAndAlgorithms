//  improved Linear Search
//  1 - transposition key is moved one position left ,
//      decrease one step from next search

//  2 - Move to Head/Tail, key is swapped with tail/head,
//      optimize search to O[1] for next searches

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

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearchMoveToHead(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[0], &arr->A[i]);
            return i;
        }
    }
    return -1;
}

// int LinearSearchTransposition(struct Array *arr, int key)
// {
//     for (int i = 0; i < arr->length; i++)
//     {
//         if (key == arr->A[i])
//         {
//             swap(&arr->A[i], &arr->A[i - 1]);
//             return i;
//         }
//     }
//     return -1;
// }

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    Display(arr);

    // printf("\nElement found at index : %d", LinearSearchTransposition(&arr, 4));
    printf("\nElement found at index : %d", LinearSearchMoveToHead(&arr, 4));

    Display(arr);

    return 0;
}

// Output :
// Element in array are : 2 3 4 5 6
// Element found at index : 2
// Element in array are : 4 3 2 5 6


// Analysis :
// worst : O[n]
// Best : O[1]