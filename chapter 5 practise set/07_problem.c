// WAP to print this pattern 
// *            if n-->1 print 1 star
// ***          if n-->2 print 3 stars
// *****        if n-->3 print 5 stars
// .
// .
// n times      2n-1(by analysing the pattern)


#include<stdio.h>


int main() {
    int a;
    printf("Enter number:\n");
    scanf("%d",&a);


    for( int i=0 ; i<a ; i++){
        
        for( int j=0 ; j<(2*i+1) ; j++){
            printf("*");
        }
        printf("\n");
    }



    return 0 ;
}