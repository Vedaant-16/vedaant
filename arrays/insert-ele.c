#include<stdio.h>
int main(){
    int i,j,k,el,idx,arr[5]={1,1,1,1,1};
    printf("Enter the index and element \n");
    scanf("%d%d",&idx,&el);
    for(i=5;i>=idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx-1]=el;
    for(i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }




    return 0;
}


// #include <stdio.h>

// #define SIZE 100

// int main() {
//     int arr[SIZE], i, n, pos, val;

//     printf("Enter number of elements in the array: ");
//     scanf("%d", &n);

//     printf("Enter elements in array: ");
//     for(i=0; i<n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the position where to insert: ");
//     scanf("%d", &pos);

//     printf("Enter the value to insert: ");
//     scanf("%d", &val);

//     for(i=n; i>=pos; i--) {
//         arr[i] = arr[i-1];
//     }

//     arr[pos-1] = val;
//     n++;

//     printf("Array elements after insertion: ");
//     for(i=0; i<n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }