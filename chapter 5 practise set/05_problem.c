// what will be the o/p of the given code :
// int a = 4 ;
// printf("%d %d %d\n",a,a++,++a);

#include<stdio.h>

int main() {
    int a = 4 ;
    printf("%d %d %d\n",a,++a,a++);  
    // output depends on the compiler how it evaluate 
    // Because we are modifying and acessing same variable in a line
    // its output are different on different compilers ex: 664 , 455 

    return 0 ;
}