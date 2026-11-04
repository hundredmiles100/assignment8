#include <stdio.h>

void merge_descending(int a[], int b[], int n, int result[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (a[i] >= b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }
    while (i < n)
        result[k++] = a[i++];
    while (j < n)
        result[k++] = b[j++];
}

int main(void)
{
    int n;
    printf("Enter size of each array: ");
    scanf("%d", &n);

    int a[n], b[n], c[2 * n];

    printf("Enter %d elements of first array in descending order: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter %d elements of second array in descending order: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    merge_descending(a, b, n, c);

    printf("Merged array in descending order: ");
    for (int i = 0; i < 2 * n; i++)
        printf("%d ", c[i]);
    printf("\n");

    return 0;
}
