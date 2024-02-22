#include<stdio.h>
#define size 4 
int main(){
    int arr[size]={0},isPalindrome;
    printf("Enter the  numbers: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    int j=size-1;
    isPalindrome = 1;
    while(i<j){
        if(arr[i]!=arr[j]){
            isPalindrome=0;
            
        }
        i++;
        j--;
    }
    if(isPalindrome){
        printf("Array is palindrome");
    }
    else{
        printf("Array is not palindrome");
    }
    return 0;
}



// #include <stdio.h>
// #define SIZE 5 // Change this to change the size of the array

// int main() {
//     int arr[SIZE] = {1, 2, 3, 2, 4}; // Change this to change the array
//     int start = 0;
//     int end = SIZE - 1;
//     int isPalindrome = 1; // Assume it's a palindrome

//     while(start < end) {
//         if(arr[start] != arr[end]) {
//             isPalindrome = 0; // It's not a palindrome
//             break;
//         }
//         start++;
//         end--;
//     }

//     if(isPalindrome) {
//         printf("The array is a palindrome.\n");
//     } else {
//         printf("The array is not a palindrome.\n");
//     }

//     return 0;
// }