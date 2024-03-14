#include<stdio.h>
#include<string.h>
int StrComp(char [],char []);
int main(){
    char str1[25],str2[25];
    int res;
    printf("Enter two strings two compare \n");
    gets(str1);
    gets(str2);
    res=StrComp(str1,str2);
    if(res==1){
        printf("Strings are same");
    }
    else{
        printf("Strings are not same");
    }


    return 0;
}
// int StrComp(char str1[],char str2[]){
//     int i=0;
//     if(strlen(str1)==strlen(str2)){
//         for(i=0;str1!='\0';i++){
//             if(str1[i]!=str2[i]){
//                 return 0;
//             }
//             return 1;
//         }
//     }
// }
int StrComp(char str1[],char str2[]){
    int i=0;
    char *ptr1=str1;
    char *ptr2=str2;
    if(strlen(str1)==strlen(str2)){
        for(i=0;*ptr1!='\0';i++){
            if(*(ptr1)!= *(ptr2)){
                return 0;
                ptr1++;
                ptr2++;
            }
            return 1;
        }
    }
}