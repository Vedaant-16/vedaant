#include<stdio.h>
int main(){
    int n,arr[100]={0},temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }



    return 0;
}