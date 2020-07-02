// Diagonal Element

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *A, n, ch, x; // ch - choice
    int i, j;
    printf("Enter Dimension ");
    scanf("%d", &n);
    A = (int *)malloc(n * sizeof(int));
    do
    {
        printf("\n");
        printf("1. Create\n");
        printf("2. Get\n");
        printf("3. Set\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (int i = 1; i <= n; i++)
            {
                scanf("%d", &A[i - 1]);
                break;
            }
        case 2:
            printf("Enter Inices : ");
            scanf("%d%d", &i, &j);
            if (i == j)
                printf("%d", A[i - 1]);
            else
                printf("0");

        case 3:
            printf("Enter the row, column, element  :");
            scanf("%d%d%d", &i, &j, &x);
            if (i == j)
                A[i - 1] = x;
            break;

        case 4:
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (i == j)
                    {
                        printf("%d ", A[i - 1]);
                    }
                    else
                        printf("0 ");
                }
                printf("\n");
            }
        }
    } while (ch != 5);
}