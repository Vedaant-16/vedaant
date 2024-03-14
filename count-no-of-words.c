#include<stdio.h>
#include<string.h>
int main(){
    char str[25];
    printf("Enter string to count words: ");
    gets(str);
    int isword=0;
    int count=1;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '&& str[i+1]!=' '){
            count++;
        }
    }
    printf("Numbers of words is %d",count);
    return 0;
}