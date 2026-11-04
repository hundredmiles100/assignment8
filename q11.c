#include <stdio.h>

int delete_at(int a[], int n, int position)
{
    if (position < 0 || position >= n)
        return n;

    for (int i = position; i < n - 1; i++)
        a[i] = a[i + 1];

    return n - 1;
}

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int position;
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &position);

    int new_n = delete_at(a, n, position);
    if (new_n == n) {
        printf("Invalid position\n");
        return 1;
    }

    printf("Array after deletion: ");
    for (int i = 0; i < new_n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
