#include <stdio.h>
int main()
{
    int frq[256] = {0}, i, max;
    char a[100], c;
    printf("Enter a string:  ");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
            continue;
        c = a[i];
        if (c >= 'A' && c <= 'Z')
            c += 32;
        frq[(int)c]++;
    }

    max = 0;
    for (i = 0; i < 256; i++)
    {
        if (frq[i] > max)
            max = frq[i];
    }
    printf("Highest frequency character(s) in the string is/are: ");
    for (i = 0; i < 256; i++)
    {
        if (frq[i] == max)
            printf("%c ", (char)i);
    }
    return 0;
}
