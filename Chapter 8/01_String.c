#include<stdio.h>

int main() {
    // char str[] = {'A','B','C','\0'};
    char str[] = "ABC";     // is same as char str[] = {'A','B','C','\0'};
    for (int i = 0 ; i < 4 ; i++){
        printf("The character is %c\n",str[i]);
    }
    return 0 ;
}