#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[25],temp[25];
    int i,j,k;
    printf("Enter string: ");
    gets(str);
    for(i=strlen(str)-1;i>=0;i--){
            if(str[i]!=' '){
                str[i]=toupper(str[i]);
            }
            else{
                break;
            }
        
    }
    printf("%s",temp);


    return 0;
}