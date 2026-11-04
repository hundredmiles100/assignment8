#include <stdio.h>

int insert_sorted(int a[], int n, int value)
{
    int i = n - 1;
    while (i >= 0 && a[i] > value) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = value;
    return n + 1;
}

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];
    printf("Enter %d integers in ascending order: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int value;
    printf("Enter value to insert: ");
    scanf("%d", &value);

    int new_n = insert_sorted(a, n, value);

    printf("Array after insertion: ");
    for (int i = 0; i < new_n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
