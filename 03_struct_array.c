#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee facebook[100];  //array
//  -----int-------  --arr[100]--   <--- example
    facebook[0].code = 0;
    facebook[1].code = 1;

    struct employee harry = { 33 , 10000.0 , "harry" };
    printf("%d %f %s",harry.code, harry.salary, harry.name);
    
    return 0 ;
}