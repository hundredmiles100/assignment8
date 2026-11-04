#include <stdio.h>
#include <limits.h>

int second_largest(int a[], int n)
{
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }
    return second;
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

    int result = second_largest(a, n);
    if (result == INT_MIN)
        printf("No second largest element (all elements are equal or fewer than 2 distinct values)\n");
    else
        printf("Second largest element = %d\n", result);

    return 0;
}
