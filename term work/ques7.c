#include <stdio.h>
int main()
{
    char a[50];
    printf("Enter the string:  ");
    gets(a);
    int i, j = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
    puts(a);
    return 0;
}
