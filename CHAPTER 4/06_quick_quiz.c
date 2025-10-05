// WAP TO PRINT FIRST N NATURAL NUMBER WHERE N WILL BE TAKEN BY USER.

#include<stdio.h>

int main() {
    int a , n=1;
    printf("enter any natural number: \n");
    scanf("%d",&a);
    do{
        printf("%d\n",n);
        n++;
    }while(n<=a);

    return 0 ;
}