#include <stdio.h>
int main()
{
    int m, n, i, j, sum, a[10][10];
    printf("Enter the order of square matrix (m*n): ");
    scanf("%d%d", &m, &n);
    if (m != n)
    {
        printf("\n\t\t\t*****OUTPUT*****\n\n");
        printf("Not a square matrix. Exiting.....");
        return 0;
    }
    printf("Enter the elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    sum = 0;
    printf("The elements being summed of the lower triangular matrix are: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            }
        }
    }

    printf("\nThe Sum of the lower triangular Matrix Elements are: %d", sum);
    return 0;
}
