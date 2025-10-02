// 3.0 + 1 IS a)integer b)floating point number c) character
// easy : it will be a floating point number 
#include<stdio.h>

int main() {
    int a = 1;
    float b = 3.0;
    int c = b + a;
    float d = b + a; // it is correct as float + int is always float
    printf(" %d\n %f",c,d);

    return 0 ;
}