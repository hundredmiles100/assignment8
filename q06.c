#include <stdio.h>

int count_odd(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            count++;
    return count;
}

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Number of odd elements = %d\n", count_odd(a, n));

    return 0;
}
