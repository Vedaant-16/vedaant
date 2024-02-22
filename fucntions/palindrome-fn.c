#include<stdio.h>
int ispal(int);
int main(){
    int n,res;
    printf("Enter the number: ");
    scanf("%d",&n);
    res=ispal(n);
    if(res==1){
        printf("Number is palindrome");
    }
    else if(res==0){
        printf("Number is not palindrome");
    }
    return 0;
}

int ispal(int a){
    int d,rev=0,temp=a;
    while(a>0){
        d=a%10;
        rev=rev*10+d;
        a=a/10;
    }
    if(rev==temp){
        return 1;
    }
    else{
        return 0;
    }
}