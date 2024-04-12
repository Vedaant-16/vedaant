#include <stdio.h>
void printWord(char *);
int main()
{
    int k, i;
    char a[50], b[20];
    printf("Enter the string: ");
    gets(a);
    printf("Strings or words after split by space are:\n");
    k = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 32)
        {
            b[k] = '\0';
            if (k > 0)
                printWord(b);
            k = 0;
        }
        else
        {
            b[k] = a[i];
            k++;
        }
    }
    if (k > 0)
    {
        b[k] = '\0';
        printWord(b);
    }
      return 0;
}
void printWord(char *word)
{
    printf("%s\n", word);
}
