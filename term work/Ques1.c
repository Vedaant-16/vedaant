#include <stdio.h>
int main()
{
    int n, a[20], i, frq[256] = {0};
    printf("\n\n\t\t\t*****INPUT*****\n\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i + 1);
        scanf("%d", &a[i]);
        frq[a[i]]++;
    }
    printf("\n\t\t\t*****OUTPUT*****\n\n");
    printf("The unique elements found in the array are: ");
    for (i = 0; i <= n; i++)
    {
        if (frq[a[i]] == 1)
            printf("%d ", a[i]);
    }
    return 0;
}
