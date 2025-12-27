#include<stdio.h>
struct employee{
    int code;
    float salary;
};

void show(struct employee e){
    printf("%d %f",e.code,e.salary);
}

int main() {
    struct employee e1;
    e1.code = 789;
    e1.salary = 54.321;

    show(e1);

    return 0 ;
}