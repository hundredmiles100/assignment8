#include <stdio.h>

int insert_at(int a[], int n, int position, int value)
{
    if (position < 0 || position > n)
        return n;

    for (int i = n; i > position; i--)
        a[i] = a[i - 1];

    a[position] = value;
    return n + 1;
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

    int position, value;
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &position);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    int new_n = insert_at(a, n, position, value);
    if (new_n == n) {
        printf("Invalid position\n");
        return 1;
    }

    printf("Array after insertion: ");
    for (int i = 0; i < new_n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
