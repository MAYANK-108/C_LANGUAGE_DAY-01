#include<stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("Enter the value of c \n");
    scanf("%d",&c);
    printf("Enter the value of d \n");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("a is the greatest integer among all value of a is %d",a);

    }
    else if(b>a && b>c && b>d){
        printf("b is the greatest integer among all value of d is %d",b);

    }
    else if(c>b && c>a && c>d){
        printf("c is the gceatest integer among all value of c is %d",c);

    }
    else if(d>a && d>c && d>b){
        printf("d is the greatest integer among all value of d is %d",d);

    }

    return 0 ;
}

// EASYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY