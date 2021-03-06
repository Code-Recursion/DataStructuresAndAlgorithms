#include <stdio.h>
#include <stdlib.h>
struct Matrix
{
    int *A;
    int n;
};

void Display(struct Matrix m)
{
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            if (i >= j)
                printf("%d ", m.A[m.n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

void Set(struct Matrix *m, int i, int j, int x)
{
    if (i >= j) // non-zero
        m->A[m->n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j] = x;
}

int Get(struct Matrix m, int i, int j)
{
    if (i >= j)
        return m.A[m.n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j];
    return 0;
}
int main()
{
    struct Matrix m;
    int x;
    printf("Enter Dimension : ");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n * (m.n - 1) / 2 * sizeof(int));

    printf("\n Enter all elements : ");
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            scanf("%d", &x);
            Set(&m, i, j, x);
        }
    }

    printf("\n");
    Display(m);
    return 0;
}