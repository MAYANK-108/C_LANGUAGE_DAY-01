#include<stdio.h>
int reference(int *);
int reference(int* a) {
    printf("%d",*a);
}

int main() {
    int x = 7 ;
    int* y = &x;
    reference(y);

    return 0 ;
}