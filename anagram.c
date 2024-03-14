#include<stdio.h>
#include<string.h>
int anagram(char [],char[]);
int anagram(char str1[],char str2[])
{
    
    int count1[256]={0};
    int count2[256]={0};
    if(strlen(str1)!=strlen(str2)){
        return 0;
    } 
    for(int i=0;str1[i]!='\0';i++){
        count1[str1[i]]++;
    }
    for(int i=0;str2[i]!='\0';i++){
        count2[str2[i]]++;
    }
    for(int i=0;i<256;i++){
            if(count1[i]!=count2[i]){
                return 0;
            }
    }
    return 1;
}
int main(){
    char str1[100],str2[100];
    printf("Enter strings to check string is anagram or not\n");
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    if(anagram(str1,str2)==1){
        printf("Strings are anagram");
    }
    else{
        printf("Strings are not anagram ");
    }
    return 0;
}






// #include <stdio.h>

// int areAnagrams(char *str1, char *str2) {
//     int count1[256] = {0};
//     int count2[256] = {0};

//     // Calculate the frequency of characters in str1
//     for (int i = 0; str1[i] != '\0'; i++) {
//         count1[str1[i]]++;
//     }

//     // Calculate the frequency of characters in str2
//     for (int i = 0; str2[i] != '\0'; i++) {
//         count2[str2[i]]++;
//     }

//     // Compare the frequency of characters
//     for (int i = 0; i < 256; i++) {
//         if (count1[i] != count2[i]) {
//             return 0; // Not anagrams
//         }
//     }

//     return 1; // Anagrams
// }

// int main() {
//     char str1[100], str2[100];

//     printf("Enter the first string: ");
//     scanf("%s", str1);

//     printf("Enter the second string: ");
//     scanf("%s", str2);

//     if (areAnagrams(str1, str2)) {
//         printf("The strings are anagrams.\n");
//     } else {
//         printf("The strings are not anagrams.\n");
//     }

//     return 0;
// }

