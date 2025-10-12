// WAP to calculate the force of attraction of a body of mass"m" exerted by earth
// Consider g = 9.8m/s^2 
// F = m*g

#include<stdio.h>
int forcecalculator(int);
int forcecalculator(int m){
    return m*9.8;
}
int main() {
    int M;
    printf("Enter the mass of the body:\n",M);
    scanf("%D",&M);
    int c = forcecalculator(M);
    printf("the force of attraction of a body of mass %d is %d exerted by earth\n",M,c);

    return 0 ;   
}