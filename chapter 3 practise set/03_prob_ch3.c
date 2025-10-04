#include<stdio.h>
int main(){
    int i;
    float tax;
    printf("Enter your income : \n");
    scanf("%d",&i);
    
    if(i<=250000){
        tax = 0;
    }

    else if(i>250000 && i<500000){
        tax = 0.05 * (i - 250000); // kyoki 2.5lakh to tax free h na to jo bacha uspe hi tax lagega sirf
    }

    else if(i>500000 && i<1000000){
        tax = 0.05*(500000-250000) + 0.2 * (i-500000);
    }
    else if (i>1000000){
        tax = 0.05 * (500000-250000) + 0.2 * (1000000-500000) + 0.3 * (i - 1000000);
    }
    printf("The total tax paid by you is %f",tax);
}