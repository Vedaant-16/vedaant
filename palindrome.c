#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],i,l,f=0;
    printf("enter the element of the string: ");
    gets(str);
    l=strlen(str)-1;
    // while(i<l)
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[l])
        {
            f=1;
        }
        // i++;
        l--;
    }
    if(f==0)
    {
        printf("is the palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}