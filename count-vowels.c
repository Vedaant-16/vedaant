#include<stdio.h>
#include<ctype.h>
int count_vowel(char []);
int count_vowel(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        str[i]=tolower(str[i]);
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    char str[25];
    int result;
    printf("Enter string: ");
    scanf("%[^\n]s",str);
    result=count_vowel(str);
    printf("The numbers of vowels in string is : %d",result);

    return 0;
}