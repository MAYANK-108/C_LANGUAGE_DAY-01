// WAP to print sum of first n natural numbers using functions
#include<stdio.h>
int sum(int);
int sum(int n){
    if(n==1){
        return 1;
    }
    return n + sum(n-1);
}
int main() {
    int a;
    printf("Enter number:\n");
    scanf("%d",&a);
    int c = sum(a);
    printf("%d",c);


    return 0 ;
}