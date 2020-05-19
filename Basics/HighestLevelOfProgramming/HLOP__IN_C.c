#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *R, int initLength, int initBreadth)
{
    R->length = initLength;
    R->breadth = initBreadth;
}

int area(struct Rectangle R)
{
    return R.length * R.breadth;
}

void changeLength(struct Rectangle *R, int newLength)
{
    R->length = newLength;
}

int main()
{
    struct Rectangle R;
    
    initialize(&R, 10, 20);                   // pass by address
    
    printf("Original : ");
    printf("%d %d\n", R.length, R.breadth);
    
    printf("Area : %d\n", area(R));           // pass by value
    
    changeLength(&R, 30);                     // pass by address
    printf("Changed Length : %d ", R.length);
}

/*
    output
    10 20
    200
    30
*/