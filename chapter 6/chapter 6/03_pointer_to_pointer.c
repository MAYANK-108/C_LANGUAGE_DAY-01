#include<stdio.h>

int main() {
    int i = 6;
    int* j = &i;    // for storing any address int* is used..   
    int** k = &j;   // for storing the address of a variable which is storing the address of another variabel we uses int**
    
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",**(&j));
    return 0 ;
}