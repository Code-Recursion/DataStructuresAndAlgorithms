// Array as Abstract Data Type
// ADT has two properties
// 1.) Declaration (most of the languages has array by default)
// 2.) Operation - The operation must be defined 

#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("\nElement in array are : ");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

int main()
{
    struct Array arr;
    int n;

    printf("Enter the size of array : ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    printf("\nEnter all Element\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);

    arr.length = n;

    Display(arr);

    return 0;
}