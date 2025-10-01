#include<stdio.h>

int main() {
    int a = 5;
    int b = 4;
    int c = 5;
 // int a = b+3   it is invalid cuz a is already defined above 
    int d=6,e=7,f=8;
    int x = y = z = 10  // it is also valid as x,y,z have same value
    printf("The value of a is %d\n" , a);
    printf("The value of b is %d\n" , b);
    printf("The value of c is %d\n" , c);
    printf("The value of d is %d\n" , d);
    printf("The value of e is %d\n" , e);
    printf("The value of f is %d\n" , f);
    return 0 ;
}