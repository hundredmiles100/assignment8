#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], visited[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        visited[i] = 0;
    }

    printf("Frequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d time(s)\n", a[i], count);
    }

    return 0;
}
