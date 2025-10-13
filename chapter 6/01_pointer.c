#include<stdio.h>

int main() {
    int i=44;
    int* j = &i; // j is a pointer pointing i
    // j is an integer pointer
    printf("The address of i is %p\n",&i);
    printf("The address of i is %u\n",&i);
    printf("The address of i is %u\n",j);

    printf("The value at address of i is %d\n",*j);
    printf("The value at address of i is %d\n",*(&i));
    
    return 0 ;

}