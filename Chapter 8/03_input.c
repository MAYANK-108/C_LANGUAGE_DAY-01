#include<stdio.h>

int main() {
    char st[15];
    printf("Enter your name : ");
    scanf("%s",st); // we didnt use &st bcz st is alr a address 
                    // as we learned before st is the address of its elements
    printf("Welcome, %s",st);

    return 0 ;
}