// WAP to Convert celsius into fahrenhiet
#include<stdio.h>

void converter(float);
void converter(float a){
    printf("%f degree Celsius in fahrenheit is %.2f\n", a , (a*9/5)+32);
}

int main() {
    float c;
    printf("Enter temperature in degree:\n");
    scanf("%f",&c);
    converter(c);
    return 0 ;
}