#include<stdio.h>

int main() {
    int a = 6;
    int b = 199;
    int c = a+b;
    printf("The sum of the %d and %d is %d \n" ,a , b, c);

// Modulus operator gives the remainder of two numbers
    printf("The remainder when %d divided by %d is %d", a , b , a%b);

    return 0 ;
}
/*
        important thing
        1.    modulus(%) can not be used for float type.
        2.    a^b is not a to the power b.

    int b=2 , c=3 ;
    int z = b*c;      legal
    int b*c = z;      Illegal


    int    and  int   = int 
    int    and  float = float
    float  and  float = float
*/