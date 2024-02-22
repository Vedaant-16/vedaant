#include<stdio.h>
void reverse(int arr[],int a,int b){
    int i=a;
    int j=b;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;

    }
    return;
    
}
int main(){
    int n,k;
    int arr[1000];
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter how many elements to rotate: ");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);    //step 1 reverse all array; {7,6,5,4,3,2,1}
    reverse(arr,0,k-1);    // step 2 reverse 0 to k-1 {5,6,7,4,3,2,1}
    reverse(arr,k,n-1);    // step 3 reverse k to n-1 {5,6,7,4,3,2,1}


    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}