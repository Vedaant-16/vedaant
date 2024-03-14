#include<stdio.h>
#include<string.h>
void findFreq(char []);
void findFreq(char str[]){
    int i,j,count;
    for(i='a';i<='z';i++){
        count =0;
        for(int j=0;str[j]!='\0';j++){
            if(str[j]==i){
                count ++;
            }
        }
        if(count>0){
            printf("%c is %d times \n",i,count);
        }
    }
}

int main(){
    char str[25],fstr[25];
    printf("Enter string: ");
    gets(str);
    findFreq(str);
    return 0;
}