// print address of a variable "i
// then pass it in a function and again print its address
// Are both address same? why???

#include<stdio.h>
int address(int*);
int address(int* b){
    printf("The value of b is %d\n",b);
    printf("The value of b is %d",*b);
}
int main() {
    int a = 7;
    int* b = &a;
    printf("The address of a is %u\n",b);
    address(b);


    return 0 ;
}
