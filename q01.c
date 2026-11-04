#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
