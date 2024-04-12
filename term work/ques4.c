#include <stdio.h>
int main()
{
    int m, n, i, j, temp, max, a[10][10];
    printf("enter the size of array (m*n): ");
    scanf("%d%d", &m, &n);
    printf("enter the elements of array:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("The maximum element of each row of matrix are: ");
    for (i = 0; i < m; i++)
    {
        max = a[i][0];
        for (j = 0; j < n; j++)
        {
            if (max < a[i][j])
            {
                temp = max;
                max = a[i][j];
                a[i][j] = temp;
            }
        }
        printf("%d ", max);
    }
    return 0;
}
