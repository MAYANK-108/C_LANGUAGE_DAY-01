/*
Very Easy question : A do-while loop is executed 
a) at least once      b) at least twice       c) at most once

make it interesting by making a program of this question where user 
will choose the option among these 3 and for wrong it displays "Wrong answer"
for correct it will display " Correct answer "

*/

#include<stdio.h>

int main() {
    int ans;

    printf(" Question : A do-while loop is executed _______ ??\n");
    printf(" 1. At least once \n");
    printf(" 1. At least twice \n");
    printf(" 1. At most once \n");
    printf("ANSWER IN 1/2/3 ONLY.\n");
      while (1){
        printf("Enter your choice : \n");
        scanf("%d", &ans);
        if(ans==1){
            printf("Correct answer\n");
        }
        else if(ans==2){
            printf("Wrong answer!\n");
        }
        else if(ans==3){
            printf("Wrong answer!\n");
        }
        else{
            printf("Invalid answer\n");
        }
    }


    return 0 ;
}