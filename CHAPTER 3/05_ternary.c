#include<stdio.h>

int main() {
    int a = 1;
    int b = 0;

    // condition? expression-if-true : expression-if-false
    a>b?printf("a is greater than b\n"):printf("b is greater than a\n");
    a&&b?printf("both are true\n"):printf("maybe one or both are false/0\n");
    return 0 ;
}