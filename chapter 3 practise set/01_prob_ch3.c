// 1. What will be the output of this program
// int a = 10;
// if (a = 11)
// printf("I am 11");
// else
// printf("I am not 11");


// output : I am 11 because of "=" instead of "= =".
// when there is only l line in if or else condition we dont need "{}".
// "{}" is used when we have to weite multiple lines in if or else.

#include<stdio.h>

int main() { 
    int a = 10;
        if (a==11)
            printf("I am 11");
        else
            printf("I am not 11");

    return 0 ;
}