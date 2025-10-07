
// MAKE THE LAST PROGRAM WITH FOR AND DO WHILE LOOP:
// TRY MAKING FIRST YOURSELF IF U REALLY WANNA LEARN

// WITH "DO WHILE " LOOP

#include <stdio.h>
int main(){
    int num,sum;
    num=1;
    sum=0;
    do{
        sum+=num;
        num++;
    }while(num<=10);
    printf("the sum of first 10 natural number is %d\n",sum);
    printf("THIS IS PRINTED USING DO WHILE LOOP.\n");
    printf("----------------------------------------\n"); // this is just to make some 
    printf("----------------------------------------\n"); // space wihle printing.
 

// WITH "FOR LOOP" 


    int num1,sum1;
    sum1=0;
    for( num1 = 1 ; num1 <= 10 ; num1++){
        sum1 = sum1 + num1;
    }
    printf("the sum of first 10 natural number is %d \n",sum1);
    printf("THIS IS PRINTED USING FOR LOOP.\n");

    return 0;
}   

