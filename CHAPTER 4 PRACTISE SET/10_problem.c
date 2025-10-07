// WAP to check wheather a number is prime or not.
// A PRIME NUMBER IS A NUMBER THAT CAN ONLY BE DIVIDED BY ITSELF AND 1 WITHOUT REMAINDER.
#include<stdio.h>

int main() {
    int n,i,not_prime;
    while(1){

    printf("Enter the number you wanna check :\n");
    scanf("%d",&n);

        if(n<=1){
            printf("%d is not prime.\n",n);
        }

        else if(n==2){
            printf("%d is prime\n",n);
        }

        else{
            for(i=2;i<=(n-1);i++){
                if(n%i==0){
                    not_prime = 1;
                    break;
            
                }
                
            }
            if(not_prime == 1){
                printf("%d is not prime \n",n);
            }
            else{
                printf("%d is a prime number\n",n);
            }
        }
    }
    return 0 ;
}