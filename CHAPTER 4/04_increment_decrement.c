#include<stdio.h>

int main() {

    int i = 5;
    printf("the value of i is %d\n",i); //O/P = 5
    i = i + 2;
    printf("The value of i is %d\n",i); //O/P =  7

    // whats the difference between i++ and ++i??
    
    printf("The value of i is %d\n",++i); //O/P = 8

    printf("the value of i is %d\n",i++); //O/P = 8
    printf("after i++ the new value of i is %d\n",i); //9

    // (post increment) i++ prints i first and then increase 1 in the value of i
    // (pre increment ) ++i increase 1 in the value of i first and then prints i

    i+=2;
    printf("the value of i after i+=2 is %d",i); //11

    // i--(post decrement) decrease 1 after printing i
    // --i(pre decrement ) first decrese then prints i

    // (i=i+3) = (i+=3)
    // i += 3 → adds 3 to i
    
    // i -= 2 → subtracts 2 from i
    // i *= 4 → multiplies i by 4
    // i /= 5 → divides i by 5
    // i %= 7   gives remainder when i is divided by 7

    return 0 ;
}   