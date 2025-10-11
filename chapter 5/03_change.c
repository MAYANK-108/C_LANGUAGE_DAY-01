#include<stdio.h>

int change(int);
int change(int a){
    a = 77;
    return a;
}

int main() {
    int b = 22;
    change(b);
    printf("the value of b is %d\n",b);

    // DOESNT MATTER THE NAME OF THE FUNCTION LIKE "CHANGE" 
    // IT WILL NEVER CHANGE THE VALUE OF B
    // a WILL GET THE VALUE OF B OR WE CAN SAY A COPY OF B
    // CHANGING a WILL NOT CHANGE b.


    return 0 ;
}