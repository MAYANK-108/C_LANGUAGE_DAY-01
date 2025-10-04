#include<stdio.h>

int main() {
    int y;
    printf("Enter the year you wanna check : \n");
    scanf("%d",&y);
    if((y%4==0 && y%100!=0) || y%400==0){
        printf("haha you found a leap year %d is a leap year",y);
    }
    else{
        printf("%d is not a leap year",y);
    }

    return 0 ;
}   