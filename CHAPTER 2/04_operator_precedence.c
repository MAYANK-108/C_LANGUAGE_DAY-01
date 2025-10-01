#include<stdio.h>

int main() {

    printf("A PRO TIP : USE PARANTHESIS IN CASE OF CONFUSION");

    // int x;
    // int y;
    // printf("the evaluation of 3*x-8*y is.. \n");
    // printf("a) 3(x-8y) \n");
    // printf("b) 3(x)-8(y) \n");


    // IN C LANGUAGE THE BODMAS RULE IS NO LONGER APPLIED 
    /*
    HERE'S THE OPERATOR PRIORITY TABLE 
      PRIORITY       OPERATOR
        IF YOU HAVE USED PARENTHESIS() THE IT WILL BE THE FIRST PRIORITY
        1st            (*)(%)(/)
        2nd            (+)(-)
        3rd            (=)

        NOW WHAT IF THE EXPRESSION IS LIKE 3*x/4 all hv 1st priority
        in this case it is solved left to right 
        for example :
    */

    // printf("The answer is as per priority table firstly (*) then (-) so the correct answer is  (3*x) - (8*y)");

    int a = 3 ;
    int b = 6 ;
    int c = 9 ; 
    printf("The value of a*b/c is %d \n",a*b/c);
    printf("as you saw all operators hv same priority thus it is solved left to right");

    return 0 ;
}