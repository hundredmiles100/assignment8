#include <stdio.h>

void subtract_matrices(int r, int c, int a[r][c], int b[r][c], int result[r][c])
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[i][j] = a[i][j] - b[i][j];
}

int main(void)
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], result[r][c];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    subtract_matrices(r, c, a, b, result);

    printf("Difference of matrices (A - B):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
