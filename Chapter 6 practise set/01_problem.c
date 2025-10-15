// WAP to get the address of a variable and use that to get the value of the variable
#include<stdio.h>

int main() {
    int k;
    printf("Enter the value of k: \n");
    scanf("%d",&k);
    int* j = &k;
    printf("The address of k is %u\n",j); 
    printf("The value of k is %d\n",*j);


    return 0 ;
}