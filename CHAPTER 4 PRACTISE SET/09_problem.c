// 8th problem using while loop
// problem : find factorial of a given number.

#include<stdio.h>
int main() {

    int n,i;
    long long fact = 1;
    i = 1;
    while (1){
        printf("Enter the number :\n");
        scanf("%d",&n);

        while(i<=n){
            fact = fact * i;
            i++;
        }
    printf("the factorial of %d is %d\n", n , fact );
    }
    return 0 ;
}