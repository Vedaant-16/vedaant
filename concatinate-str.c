#include<stdio.h>
#include<string.h>
void addstr(char [],char []);
int main(){
    char str1[25],str2[25];
    printf("Enter two strings to concatinate: \n");
    gets(str1);
    gets(str2);
    addstr(str1,str2);
    printf("Concatinated string is %s",str1);

    return 0;
}
void addstr(char str1[],char str2[]){
    int i=0,j,k,len;
    while(str1[i]!='\0'){
        i++;
    }
    for(j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';



}