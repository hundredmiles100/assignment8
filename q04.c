#include <stdio.h>

void copy_array(int src[], int dst[], int n)
{
    for (int i = 0; i < n; i++)
        dst[i] = src[i];
}

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    copy_array(a, b, n);

    printf("Source array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nCopied array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);
    printf("\n");

    return 0;
}
