// calculate factorial of a given number

#include<stdio.h>

int main() {
    int i,n;
    long long fact=1;        // for int the value of 6 fact or 7 fact is easy to store but it cant hold the value of 15 so use long long it can store maximum value of 19 digits
    printf("Enter the number for factorial:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("The factorial of %d is %d\n",n,fact);
    return 0;
}