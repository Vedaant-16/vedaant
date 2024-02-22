#include<stdio.h>
int main(){
    int n,arr[100]={0},k,cmax=0,cmin=0,cequal=0;
    printf("Enter size of element: ");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            cmax++;
        }
        if(arr[i]<k){
            cmin++;
        }
        if(arr[i]==k){
            cequal++;
        }
    }
    printf("Numbers greater than %d is %d \n",k,cmax);
    printf("Numbers less than %d is %d \n",k,cmin);
    printf("Numbers equal than %d is %d \n",k,cequal);
    return 0;
}