// WAP to find average of 3 numbers using functions
#include<stdio.h>

int avg(int,int,int);
int avg(int a,int b,int c){
    printf("average of %d,%d,%d is %d",a,b,c, (a+b+c)/3);
}

int main() {

    int x,y,z;

    printf("Enter number 1:\n");
    scanf("%d",&x);

    printf("Enter number 2:\n");
    scanf("%d",&y);
    
    printf("Enter number 3:\n");
    scanf("%d",&z);

    avg(x,y,z);


    return 0 ;
}