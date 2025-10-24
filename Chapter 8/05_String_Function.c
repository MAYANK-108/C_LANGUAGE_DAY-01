#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Mayank";
//  1. strlen()
// strlen() exclude the null character "\0" and
// tells the length of the string.
    int length = strlen(str);
    printf("%d\n",strlen(str));
    
//  2. strcpy()
//     this function copy the content of second string into
//     first string passed to it.

    char abc[15] = "ABC";
    char xyz[15];
    strcpy(xyz,abc);
    printf("%s %s\n",xyz,abc);

//  3. strcat()
//  this function joins two strings like "Hey" and "Bro" are 2 diff strings
//  so after using this function it will be HeyBro and this value will be saved in the first string given.
    char a1[20] = "Hello ";
    char a2[20] = "Bhai";
    strcat(a1,a2);
    printf("%s\n",a1);

//  4.strcmp()
//  two inputs are given to this function and it checks whose ASCII value comes first
//  like if the first given string has lower ASCII value it prints "-1"
//  and if the second string had lower ASCII value it prints "1"

    int cmp = strcmp("deep","joke"); 
    // it will check the first letter of both strings
    // as in "d" and "j" letter "d" comes before j so "d" has lower ASCII value 
    // the it will print -1 if you forgets this everytime rmb this statement
    // ******deep jokes are negative*******
    printf("%d\n",cmp);

    return 0 ;
}