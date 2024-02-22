#include<stdio.h>
int main(){
    int arr[23],n,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    printf("duplicate elements is: %d \n ",count);

    return 0;
}