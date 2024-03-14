#include<stdio.h>
int main(){
    char str[25];
    int i,count=0;
    printf("Enter string :\n");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d ",count);


    return 0;
}