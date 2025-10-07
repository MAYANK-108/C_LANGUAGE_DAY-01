/*WAP to print
 multiplication table of a given number n*/

 //          ANSWERS USING FOR AND WHILE LOOPS

 

 //ANSWER IN WHILE LOOP IS BELOW:

//  #include<stdio.h>
//  nt main() {
//     int a,i;
//     i = 1;
//     printf("Enter the number : \n");
//     scanf("%d",&a);
//     while (i<=10){
//         printf("%d * %d = %d\n",a,i,a*i);
//         i++;
//     }
 
//     return 0 ;
//  }
 


// ANSWER IN FOR LOOP IS BELOW:

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number\n");
    scanf("%d",&a);
    for( b=1 ; b<=10 ; b++){
        printf("%d * %d = %d\n",a,b,a*b);

    }

    return 0;
}