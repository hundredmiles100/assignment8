#include <stdio.h>

int main(void)
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++) {
        int row_sum = 0;
        for (int j = 0; j < c; j++)
            row_sum += a[i][j];
        printf("Sum of row %d = %d\n", i + 1, row_sum);
    }

    for (int j = 0; j < c; j++) {
        int col_sum = 0;
        for (int i = 0; i < r; i++)
            col_sum += a[i][j];
        printf("Sum of column %d = %d\n", j + 1, col_sum);
    }

    return 0;
}
