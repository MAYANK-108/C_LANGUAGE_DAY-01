#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    char name[10];
    float salary;
};

int main() {
    struct employee e1,e2;
    e1.code = 199;
    strcpy(e1.name, "kamal");
    e1.salary = 50.5;
    
    printf("%d %s %f",e1.code , e1.name , e1.salary);
    return 0 ;
}