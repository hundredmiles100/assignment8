#include <stdio.h>

void print_unique(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        int occurrences = 0;
        for (int j = 0; j < n; j++)
            if (a[j] == a[i])
                occurrences++;

        if (occurrences == 1)
            printf("%d ", a[i]);
    }
    printf("\n");
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

    printf("Unique elements: ");
    print_unique(a, n);

    return 0;
}
