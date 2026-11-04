#include <stdio.h>

int count_duplicates(int a[], int n)
{
    int visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int occurrences = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) {
                occurrences++;
                visited[j] = 1;
            }
        }
        if (occurrences > 1)
            count += occurrences - 1;
    }
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

    printf("Total number of duplicate elements = %d\n", count_duplicates(a, n));

    return 0;
}
