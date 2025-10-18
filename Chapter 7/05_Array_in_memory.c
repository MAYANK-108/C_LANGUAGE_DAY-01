#include<stdio.h>

int main() {
    int marks[4];

    for(int i=0 ; i<4 ; i++){
        printf("Enter the value at %d\n",i);
        scanf(" %d", &marks[i]);
    }

    for(int i=0 ; i<4 ; i++){
        printf("marks at %d are %d\n",i,marks[i]);

    }
    return 0 ;
}