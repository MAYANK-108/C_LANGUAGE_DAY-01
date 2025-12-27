#include<stdio.h>
#include<string.h>

struct data{
    int code;
    int number;
    char name[10];
};

int main() {
    struct data d1;
    d1.code = 777;
    d1.number = 44444;
    strcpy(d1.name,"Zzzz");

    struct data *ptr;
    ptr = &d1;
    printf("%d\n", (*ptr).code );
    printf("%d\n", ptr->code );
    printf("%d\n", ptr->number );
    printf("%d\n", ptr->name );

    return 0 ;
}