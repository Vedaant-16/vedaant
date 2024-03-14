#include<stdio.h>
#include<string.h>
int main(){
    int arr[100],i,j,k,n;
    int *ptr=arr;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(*(ptr+j)>*(ptr+j+1)){
                int temp=*(ptr +j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}