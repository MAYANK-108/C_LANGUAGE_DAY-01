#include<stdio.h>
char GD();
char GA();
char GN();

char GD(){
    printf("good morning\n");
}
char GA(){
    printf("good afternoon\n");
}
char GN(){
    printf("good night\n");
}


int main() {
    GD();
    GA();
    GN();

    return 0 ;
}