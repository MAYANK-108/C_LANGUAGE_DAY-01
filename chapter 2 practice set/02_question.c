// which one of the following is invalid in c language
// a) int a = 1, int b = a;
// b) int v= 3*3;
// c) char dt = '21 december 2020';

#include<stdio.h>

int main() {
    int a = 1,b = a;
    printf("answer is %d \n",b);
    int v= 3*3;
    printf("v is %d \n",v);
    // char dt = '21 december 2020';  wrong!! 
    // printf(" as far as i know in char only 1 character can be given %d ",dt);

    return 0 ;
}