// /* Design a user defined function to find and print all the perfect numbers between given
// interval m to n.
// Name – Aryan kumar
// Roll no. – 16
// Section – E2
// Course – B-TECH
// Branch –CsE 
// */



#include <stdio.h>
void perfect_numbers(int,int);
int main() {
    int m,n;
    printf("Enter the range: \n");
    scanf("%d%d",&m,&n);
    // Call the function with an interval
    perfect_numbers(m,n);
    return 0;
}



void perfect_numbers(int m, int n) {
    for (int num = m; num <= n; num++) {
        int sum = 0;
        for (int i = 1; i<num; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }
        if (sum == num) {
            printf("Perfect number is %d\n", num);
        }
    }
}