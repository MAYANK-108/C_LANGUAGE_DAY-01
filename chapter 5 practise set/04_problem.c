// WAP to print nth term of  fibonacci series using recursion 
// 0,1,1,2,3,5,8,,13,21,34....
#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1||n==2){
        return (n-1);
    } 
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    int a ;
    printf("Enter till which term you wants :\n");
    scanf("%d",&a);
    int d = fibonacci(a);
    printf("%d",d);
    return 0 ;  
}