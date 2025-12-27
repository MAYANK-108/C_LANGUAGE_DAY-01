#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    int salary;
    char name[10];
}Emp;
int main(){

    Emp e1;
    e1.code = 11;
    e1.salary = 50000;
    strcpy(e1.name, " Harry ");
    printf("%d %d %s\n",e1.code,e1.salary,e1.name);
    
    Emp* ptr1 = &e1;
    printf("%d %d %s\n",ptr1->code,ptr1->salary,ptr1->name);

    return 0;
}