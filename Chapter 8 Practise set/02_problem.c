/*
WAP to take string as an input from the user using %c and %s
Confirm that both strings are equal.
*/

#include<stdio.h>

int main() {
    char ch1[10];
    printf("Enter full string: ");
    scanf("%s",ch1);

    char ch2[7];
    for(int i = 0 ; i < 6 ; i++){
        printf("Enter the character");
        scanf(" %c",&ch2[i]);
        fflush(stdin);
    }
    ch2[6] = '\0';
    printf(" both strings are : %s and %s\n",ch1,ch2);
    return 0 ;
}