#include<stdio.h>
#include<string.h>
struct emp{
    int code;
    char name[10];
    float salary;
};

int main(){
    struct emp e1, e2 , e3;

    printf("Enter the code :\n");
    scanf("%d",&e1.code);
    printf("Enter the salary :\n",e1.salary);
    scanf("%f",&e1.salary);
    printf("Enter the name of employee : \n");
    scanf("%s",&e1.name);
    
    printf("Enter the code :\n");
    scanf("%d",&e2.code);
    printf("Enter the salary :\n",e2.salary);
    scanf("%f",&e2.salary);
    printf("Enter the name of employee : \n");
    scanf("%s",&e2.name);
    
    printf("Enter the code :\n");
    scanf("%d",&e3.code);
    printf("Enter the salary :\n",e3.salary);
    scanf("%f",&e3.salary);
    printf("Enter the name of employee : \n");
    scanf("%s",&e3.name);
    
    printf("%s %d %.2f\n",e1.name , e1.code, e1.salary);
    printf("%s %d %.2f\n",e2.name , e2.code , e2.salary );
    printf("%s %d %.2f\n",e3.name , e3.code , e3.salary );
    return 0;
}