#include<stdio.h>

// Function prototype
int sum(int , int);

// Function Definition
int sum(int x,int y){
    // printf("The sum is %d\n",x+y);
    return x+y;
}


int main() {
    int a=1, b=2;
    int c = sum(a,b);
    printf("%d\n",c); 

    int a1=10, b1=20;
    int c1 = sum(a1,b1);
    printf("%d\n",c);

    int a3=11, b3=21;
    int c3 = sum(a3,b3);
    printf("%d\n",c3);

    
    

    return 0 ;
}