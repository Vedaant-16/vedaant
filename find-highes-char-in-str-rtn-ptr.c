#include<stdio.h>
#include<string.h>
char *highASCII(char [],char*);
int main(){
    char str[25],max;
    char *ptr=&max;
    printf("Enter string: ");
    gets(str);
    char *result=highASCII(str,&max);
    printf("Highest ascii value in this string is %c ",*result);

    return 0;
}
char *highASCII(char str[],char *max){
    int i=0;
    *max=str[0];
    for(i=0;str[i]!='\0';i++){
        if(*max<str[i]){
            *max=str[i];
        }
    }
    return max;
}
