#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i=0,j=0,k;
    char str[100];
    char *ptr=str;
    printf("Enter string: ");
    gets(str);
    if(*ptr!=' '){
        *ptr=toupper(*ptr);
        
    }
    for(i=1;*(ptr+i)!='\0';i++){
        if(*(ptr+i-1)==' ' && *(ptr+i)!=' '){
            *(ptr+i)=toupper(*(ptr+i));
        }
    }

    puts(str);

    return 0;
}