#include <stdio.h>

void makeCube(int *p, int size)
{
    int k;
    for (k = 0; k < size; k++)
    {
        *p = (*p) * (*p) * (*p);   // cube of element
        p++;
    }
}

int main()
{
    int n, r, c;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("matrix[%d][%d] = ", r, c);
            scanf("%d", &matrix[r][c]);
        }
    }

    makeCube(&matrix[0][0], n * n);   // passing base address

    printf("\nCube of each element:\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }

    return 0;
}
