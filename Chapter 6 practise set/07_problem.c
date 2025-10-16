// write a program to print the value 10 times of its current value
#include<stdio.h>
void ten_times(int);
void ten_times(int x){
    x = x * 10;

}
int main() {

        int a;
        printf("Enter the value: \n");
        scanf("%d",&a);
        printf("The value of a is %d\n",a);
        ten_times(a);
        printf("The value of a after using function is %d\n",a);
        


    return 0 ;
}