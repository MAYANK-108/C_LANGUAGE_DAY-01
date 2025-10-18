#include<stdio.h>

int main() {
    // POINTER ARITHMETIC BY INTRGER POINTER.......
    // int a = 5;
    // printf("The address of a is %u \n",&a); //always use %u or %d for pointer
    // int* ptr = &a;
    // printf("The address of a is %u \n",ptr); // %u for int form address and %p for normal address
    
    // ptr++;    // it will not increase value by 1
    // printf("the value of ptr is now %u \n",ptr);
    
    // if a = 5 is taking 4 byte then by ptr++; the value will increase by 4
    // as in diff system it takes diff byte to store the same value
    // so increment of ptr by(ptr++) depends on the system 
    
    // POINTER ARITHMETIC BY CHARACTER POINTER.......
    char x = 'A';
    printf("the address of x is %u\n",&x );
    char* y = &x;
    printf("the address of x is %u\n",y );

    y++;   // in char it increases by 1 because char x is taking 1 byte only
    printf("the value of y means address of x is now %u",y);
    


    return 0 ;
}