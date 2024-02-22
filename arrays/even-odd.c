#include<stdio.h>
int main(){
    int arr[23],o=0,e=0,sum=0,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e+=arr[i];
        }
        else{
            o+=arr[i];
        }
    }
    printf("The sum of even element array is %d: \n",e);
    printf("The sum of odd element array is %d:",o);
    return 0;
}