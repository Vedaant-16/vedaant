#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=9;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;
    }
    }
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    reverse(arr);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
        
    }
    
    // *********************** or *******************
    // int arr[100]={0},rarr[100]={0},n;
    // printf("Enter size of array: ");
    // scanf("%d",&n);
    // printf("Enter the numbers: \n");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
        
    // }
    // for(int i=1;i<=n;i++){
    //     rarr[n-i]=arr[i-1];
       
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d ",rarr[i]);
       
    // }



    return 0;
}