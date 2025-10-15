// write a program to print the value 10 times of its current value
#include<stdio.h>
int ten_times(int);
int ten_times(int x){
    printf("Ten times of %d is %d\n",x,10*x);
    return (10*x);

}
int main() {
    while(1){            // For infinite inputs...
        int a;
        printf("Enter the value: \n");
        scanf("%d",&a);
        ten_times(a);
    }


    return 0 ;
}