#include<stdio.h>

int main() {
    int value[5] = {23,32,34,43,33};

    // int* ptr = &value[0];  // this is
     int* ptr = value;        // same as this

    for (int i=0 ; i<5 ; i++){
        printf("values at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
    return 0 ;
}