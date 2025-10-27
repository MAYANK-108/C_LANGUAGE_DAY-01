#include<stdio.h>
char * slice(char str[],int m,int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}
int main() {
    char st[] = "Mayank";
    printf("%s",slice(st,2,4));

    return 0 ;  
}
// Take much time as,,
// you should not have any doubt regarding this topic