 /*     Quick Quiz : WAP to print natural number from 10 to 20 
        when initial loop counter is initialised with 0
*/

#include<stdio.h>
int main() {
    int i = 0;                   //INITIALISED WITH 0
    while(i<21){                 // WHILE LOOP RUNS TILL I=0 TO 20
        if(i>=10 && i<=20){      // && = AND IT RUNS ONLY WHEN BOTH COND.. ARE TRUE
            printf("The value of i is %d\n",i);   // PRINTS ALL VALUES OF i WHICH SATISFIES THE CONDITION
            
        }
        i++; // INCREMENT IN THE VALUE OF i 
    }

    return 0 ;
}