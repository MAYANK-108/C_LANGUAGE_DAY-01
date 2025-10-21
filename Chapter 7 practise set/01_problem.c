#include<stdio.h>

int main() {
    int arr[10];   
    for (int i = 0 ; i<10 ; i++){
        printf("Enter value of %d",i);
        scanf("%d",&arr[i]);
    }
    int* ptr = arr;
    int* ptr3 = &arr[2];   // Address of 3rd element of arr
    ptr = ptr + 2 ;
    printf("Address of 3rd element of arr is %u by ptr+2\n",ptr);
    printf("Address of 3rd element of arr is %u by ptr 3\n",ptr3);
    printf("%u %u are as you can see\n Hence proved.\n",ptr,ptr3);
    
    return 0 ;
}