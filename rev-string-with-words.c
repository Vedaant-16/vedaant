#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[25],revstr[25];
    int i=0;
    printf("Enter string: ");
    gets(str);
    int len=strlen(str);
    for(i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
        len--;
    }


    printf("%s ",str);
// wrong


    return 0;
}