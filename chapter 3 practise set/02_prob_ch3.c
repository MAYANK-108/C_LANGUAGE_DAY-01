#include<stdio.h>

int main() {
    int a;
    printf("enter your marks of hindi");
    scanf("%d",&a);

    int b;
    printf("enter your marks of english");
    scanf("%d",&b);

    int c;
    printf("enter your marks of maths");
    scanf("%d",&c);

    if((a+b+c)/3 <40){
        printf("failed");
    }
    else if(a<33){
        printf("haha.. you failed in hindi. lol");
    }
    else if(b<33){
        printf("hmm.. you failed in english. ahh");
    }
    else if(c<33){
        printf("no worries.. you failed maths try hard again");
    }
    else{
        printf("passed");
    }

    

    return 0 ;
}