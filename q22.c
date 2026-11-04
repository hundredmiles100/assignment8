#include <stdio.h>

int main(void)
{
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the required sum: ");
    scanf("%d", &target);

    int found = 0;
    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += a[end];
            if (sum == target) {
                printf("Subarray with sum %d: ", target);
                for (int k = start; k <= end; k++)
                    printf("%d ", a[k]);
                printf("(positions %d to %d)\n", start, end);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No subarray found with sum %d\n", target);

    return 0;
}
