
// https://media.geeksforgeeks.org/wp-content/uploads/20240304094301/ASCII-Table.png 
// all the lowecase from a to z have their ascii value from 97 to 122. {a = 97 , z = 122}

#include<stdio.h>

int main() {
    char c ;
    printf("enter your character only 1 aloud\n");
    scanf("%c",&c);

    printf("the character value is %d\n",c);

    if(c>=97 && c<=122){
        printf("your character is a lowercase character..");
    }
    else{
        printf("your charcter is not a lowercase character ");
    }


    return 0 ;
}