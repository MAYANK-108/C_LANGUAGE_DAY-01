#include<stdio.h>
int* sum(int,int);
int* sum(int a , int b){
    int* c = a + b;
    int* ptr1 = &c;
    printf("The sum of x and y is %d\n",c);
    return ptr1;
}
float* average(int,int);
float* average(int p, int q){ 
    float d = (p+q)/2.0;
    float* ptr2 = &d;
    printf("the average of x and y is %f\n",d);
    return ptr2;
}

int main() {
    int x,y;
    int* ptr1;
    float* ptr2;
    printf("Enter x and y :\n");
    scanf("%d %d",&x,&y);
    ptr1 = sum(x,y);
    ptr2 = average(x,y);
    printf("The address of sum and average is %u and %u",ptr1,ptr2);


    return 0 ;
}