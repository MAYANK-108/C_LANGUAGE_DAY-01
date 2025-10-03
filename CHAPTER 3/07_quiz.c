#include<stdio.h>

int main() {
    int a;
    printf("enter your percentage :");
    scanf("%d",&a);

    if(a>=90){
        printf("YoU GOT A RANKING");
    }
    else if(a>=80){
        printf("you got B... thoda or padh leta");
    }
    else if(a>=70){
        printf("you got C... nice cheating ki thi na ");
    }
    else if(a>=60){
        printf("you got D... asambhav");
    }
    else{
        printf("tu kon h be E mila h tujhe nikal");
    }
    

    return 0 ;
}