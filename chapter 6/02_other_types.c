#include<stdio.h>

int main() {
    char i = 'A';
    char* j = &i; // j is a pointer pointing i
    // j is an character pointer

    float k = 4.534;
    float* k1 = &k;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",&k);
    printf("The address of i is %p\n",j);

    printf("The value at address of i is %d\n",*k1);
    printf("The value at address of i is %d\n",*(&i));

    return 0 ;
}