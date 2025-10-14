#include<stdio.h>
int sum(int,int);
int sum(int a ,int b){
    a = 6;
    return a+b;
}

int main() {
    int x,y;
    printf("Enter number 1:");
    scanf("%d",&x);
    printf("Enter number 2:");
    scanf("%d",&y);

    printf( "The sum of %d and %d is %d\n" , x , y , sum(x,y) );
// when we are calling a function the copy of the values is used 
// it means if we change values in function it will not affect the real values
// but 
// if you check the next program you will be definately shocked 100%...

    return 0 ;
}