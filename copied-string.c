#include<stdio.h>
int main(){
    char str[25],cstr[25];
    int i;
    printf("enter string \n");
    scanf("%[^\n]s",&str);
    for( i=0;str[i]!='\0';i++){
        cstr[i]=str[i];
    }
    cstr[i]='\0';
    printf("copied string is : %s ",cstr);
    return 0;
}