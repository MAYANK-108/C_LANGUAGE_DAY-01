#include<stdio.h>
void swap (int* x , int* y);
void swap (int* x , int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 6 , b = 4;
    printf("The value of a and b is %d and %d\n",a,b);
    swap(&a,&b);
    printf("After swapping the value of a and b is %d and %d\n",a,b);

    return 0 ;
}