#include<stdio.h>
int sum( int* , int* );
int sum(int* a ,int* b){
    *a = 6;
    return (*a+*b);
}

int main() {
    int x=5,y=7;

    printf( "The sum of 5 and 7 is %d\n" , sum(&x,&y) );
    printf( "The sum of x %d\n" , x );

// yes , we changed the value of x from our sum function by the address 


    return 0 ;
}