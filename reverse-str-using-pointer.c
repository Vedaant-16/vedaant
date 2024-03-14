#include<stdio.h>
#include<string.h>
void revStr(char [],char []);
int main(){
    char str[25],revstr[25];
    printf("Enter string \n");
    gets(str);
    revStr(str,revstr);
    // puts(revstr);
    printf("Reversed string is %s ",str);

    return 0;
}
void revStr(char str[],char revstr[]){
    char *ptr,*ptr1;
    int i=0,j=0;
    ptr=str;
    ptr1=revstr;
    while (str[i]!='\0')
    {
        i++;
    }
    for ( j = 0; j<i/2; j++)
    {
        char chr=*(ptr+j);
        *(ptr+j)=*(ptr+i);
        *(ptr+i)=chr;
        i--;
    }
    str[j]='\0';
    


}