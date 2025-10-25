/*
WAP to print the length of a string using function without any string.h
and input by " %c"
*/
#include<stdio.h>
int countstr(char st[]){
    int count = 0;
    for(int i = 0 ; st[i]!='\0' ; i++){
        if(st[i]!='\0'){
            count += 1;
        }
    }
    return count;
}
int main() {
    char str[] = "TRY YOUR NAME";
    printf("The length of the string str is %d \n ",countstr(str));
    

    return 0 ;
}