// WAP TO PRINT SUM OF FIRST 10 NATURAL NUMBERS
// FIRST 10 NATURAL NUMBERS ARE : 1 2 3 4 5 6 7 8 9 10 

#include<stdio.h>
int main(){
    int i,sum ;
    i=1;
    sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("the sum of first 10 natural numbers is %d\n",sum);
}