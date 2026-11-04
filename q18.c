#include <stdio.h>

void transpose_matrix(int r, int c, int a[r][c], int result[c][r])
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[j][i] = a[i][j];
}

int main(void)
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], result[c][r];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    transpose_matrix(r, c, a, result);

    printf("Transpose of matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
