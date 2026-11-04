#include <stdio.h>

int is_identity(int n, int m[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && m[i][j] != 1)
                return 0;
            if (i != j && m[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int m[n][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    if (is_identity(n, m))
        printf("The matrix is an identity matrix\n");
    else
        printf("The matrix is not an identity matrix\n");

    return 0;
}
