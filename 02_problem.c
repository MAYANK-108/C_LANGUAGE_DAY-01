/*
WAP to table of 10 in reversed order
*/

#include<stdio.h>

int main() {
    int a,b;
    b=10;
    printf("Enter the number(e.g. 10) :");
    scanf("%d",&a);

    printf("here's the table of %d in reversed order\n",a);

    while(b>=1){

        printf(" %d * %d = %d \n",a,b,a*b);
        b--;
    }

    return 0 ;
}


//EASY..