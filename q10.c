#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], odd[n], even[n];
    int odd_count = 0, even_count = 0;

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            even[even_count++] = a[i];
        else
            odd[odd_count++] = a[i];
    }

    printf("Even elements (%d): ", even_count);
    for (int i = 0; i < even_count; i++)
        printf("%d ", even[i]);
    printf("\n");

    printf("Odd elements (%d): ", odd_count);
    for (int i = 0; i < odd_count; i++)
        printf("%d ", odd[i]);
    printf("\n");

    return 0;
}
