// /* Develop a user defined function to evaluate the following series and print the result in
//    the main function with appropriate message.
//              1 + 2*1 + 3*2 + 4*3 ………. upto n terms
// Name – Aryan kumar
// Roll no. – 16
// Section – E2
// Course – B-TECH
// Branch –CsE 
// */

#include<stdio.h>
int  series(int);
int main(){
    int n, res;
    printf("Enter the number: ");
    scanf("%d",&n);
    res=series(n);
    printf("Evaluation of series is %d",res);
    return 0;
}
int series(int a){
    int sum=1,d;
    for(int i=1;i<=a;i++){
        d=i*(i-1);
        sum=sum+d;
    }
    return sum;
}