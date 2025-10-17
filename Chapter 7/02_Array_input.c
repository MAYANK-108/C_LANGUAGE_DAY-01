#include<stdio.h>

int main() {
    int marks[15];
    for(int i = 0 ; i < 15 ; i++){
        printf("Enter marks at %d:  ",i);
        scanf("%d",&marks[i]);
    }
    for(int i = 0 ; i < 15 ; i++){
        printf("The marks at %d are %d\n",i,marks[i]);
    }

    return 0 ;
}