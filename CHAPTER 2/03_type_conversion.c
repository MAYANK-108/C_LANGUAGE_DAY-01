#include<stdio.h>

int main() {
    float a=9.0;
    float b=2.0;
    float c= a/b; // c is value 4.5 nhi 4.00 aaegi kyoki
                  // 9 and 2 are integers so point ke aage calculate nhi hoga              
    int d = 2.4;  // 2.4 ek float type h but int me likha h isliye d 2.4 nhi sirf 2 ban jayega 
    printf("The value of a is %f and value of b is %f and a/b is %f \n",a,b,c);


    return 0 ;
}