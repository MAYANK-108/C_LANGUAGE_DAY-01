#include<stdio.h>

int main() {
    char str[20];
    gets(str);  // allows you to use spaces between the letters or words while input
    // printf("Hello %s",str);
    puts(str);  // place the cursor in new line after printing the string
               // anything printed after puts() will be printed in new line 
    printf("ok");
    

    return 0 ;
}