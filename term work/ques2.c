#include <stdio.h>
int main()
{
    int n, i, j, k, a[20], b[20], c[20];
    printf("enter the number the elements to be stored in array: ");
    scanf("%d", &n);
    printf("enter the %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    j = 0, k = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            b[j++] = a[i];
        else
            c[k++] = a[i];
    }
    printf("The Even elements are: ");
    for (i = 0; i < j; i++)
        printf("%d ", b[i]);

    printf("\nThe Odd elements are: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
