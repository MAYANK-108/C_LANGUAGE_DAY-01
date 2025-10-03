#include<stdio.h>
int main(){
    int a = 0, b = 1, c = 1;
    printf("the value of a and b is %d\n",a&&b); // and is "&&" in c
    printf("the value of a or b is %d\n",a||b);  // or is "||" in c
    printf("the value of not(a) is %d\n",!a);    // not(a) is !a in c
 
    if (a||b){
        printf("either a or b is true\n");
    }

    // the code written above is equal to the code written below:

    if (c){
        if (b){
        printf("both c and b are true or 1");
        }
    }

    return 0;
}    