// /* Develop a user defined function to evaluate the following series:
//                1 - 1/2^2 + 1/3^3 – 1/4^4………. upto n terms 
// Name – Aryan kumar
// Roll no. – 16
// Section – E2
// Course – B-TECH
// Branch –CsE 
// */
#include<stdio.h>
#include<math.h>
float series(int);
int main(){
    int n;
    float res;
    printf("Enter the number: ");
    scanf("%d",&n);
    res=series(n);
    printf("Evaluation of series is %f",res);
    return 0;
}
float series(int a){
    float sum=0,d,dd;
    int sign=1;
    for(int i=1;i<=a;i++){
        d=pow(i,i);
        dd=(1/d);
        sum=sum+dd*sign;
        sign=-1;
    }
    return sum;
}