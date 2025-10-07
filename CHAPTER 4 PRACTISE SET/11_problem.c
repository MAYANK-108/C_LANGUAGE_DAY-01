// make the last programm with other remaining loops.
// last program: checking wheather a given number is prime or not.

// first with while loop

// #include<stdio.h>

// int main() {
//     int i,n,not_prime;

//     while(1){

//         printf("Enter the number : \n");
//         scanf("%d",&n);

//         if (n==0||n==1){
//             printf("%d is not prime number \n",n);
//         }
//         else if(n==2){
//             printf("%d is a prime number\n",n);
//         }

//         else{
//             i=2;
//             not_prime=0;

//             while( i <= n-1 ){
//                 if(n%i==0){
//                     not_prime = 1;
//                     break;
//                 }
//                 i++;
//             }
//         if(not_prime==1){
//             printf("%d is not a prime number \n",n);
            

//         }
//         else if(not_prime==0){
//             printf("%d is a prime number more than 2\n",n);
            
//         }
//         }

            
        
//     }

//     return 0 ;
// }




//                        now with do-while loop 

#include<stdio.h>
#include<math.h>

int main() {

    int a,b,n_prime;
    while(1){
        printf("enter the value:\n",b);
        scanf("%d",&b);

        if (b==0||b==1){
            printf("%d is not prime number \n",b);
        }
        else if(b==2){
        printf("%d is a prime number\n",b);
        }

        else{
            a=2;
            n_prime=0;

            do{
                if(b%a==0){
                    n_prime=1;
                    break;
                }
                a++;
            }while ( a <= sqrt(b) );

            if(n_prime==1){
                printf("%d is not prime\n",b);
            }
            else if(n_prime==0){
                printf("%d is prime\n",b);
            }
            
            }
        }

    

    return 0 ;
}