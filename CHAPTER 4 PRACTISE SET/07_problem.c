#include<stdio.h>

int main() {
    int num,i,tab,sum;
    num=8;
    i=1;
    sum = 0;
    while(i<=10){
        tab = num * i ;
        i++;
        sum = sum + tab;
    }
    printf("The sum of the numbers occuring in the table of 8 is %d,\n",sum);


    return 0 ;
}

// YOU WILL BE ABLE TO MAKE THIS CODE MUCH EASIER AND IN VERY SHORT WAY 
// AS YOU GO ON...