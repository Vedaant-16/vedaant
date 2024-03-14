#include<stdio.h>
#include<ctype.h>
int main(){
    char str[25];
    printf("Enter string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            break;
        }
        if(str[i]>='a' && str[i]<='z'){
            str[i]=toupper(str[i]);
        }
    }
    printf("%s ",str);
    return 0;
}