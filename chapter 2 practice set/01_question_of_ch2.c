// which data type will 3.0/8-2 return??
// my ans: i think float firstly divide and then minus 
// due to priority table and float and int calculation gives float
#include<stdio.h>

int main() {
    float a = 3.0;
    int b = 8;
    int c = 2;
    printf("%f\n",a/b-c);
    return 0 ;
}   