// wap to print the area of a rectangle with sides given  
// #include<stdio.h>

// int main() {
//     int length = 34;
//     int breadth = 33;
//     printf("the area of the rectangle is %d", length*breadth);
//     return 0 ;
// }


// wap to print the area of a rectangle whose sides will be taken by user
#include<stdio.h>

int main(){
    int length, breadth;
    printf("enter the length of the rectangle \n");
    scanf("%d", &length);

    printf("enter the breadth of the rectangle \n");
    scanf("%d", &breadth);

    printf("The area of the rectangle is %d", length*breadth);

    return 0 ;
}