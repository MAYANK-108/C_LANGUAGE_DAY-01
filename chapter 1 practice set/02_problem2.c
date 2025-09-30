// Calculate the area of a circle and modify the same program to 
// calculate the volume of cylinder given its radius and height 

#include<stdio.h>

int main() {
    int r = 3;
    int h = 5;
    printf("The volume of the cylinder with height %d and radius %d is %f \n", h , r , 3.14*r*r*h);
    printf("The area of circle with radius %d is %f", r, 3.14*r*r); 
    //yaha pr %d or %f isliye likhe h kyoki undono ki value , laga ke aage hi likhi h


    return 0 ;
}