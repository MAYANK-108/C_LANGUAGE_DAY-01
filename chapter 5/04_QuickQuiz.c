#include<stdio.h>
#include<math.h>
int main() {
    int a;
    printf("Enter the side of the square :\n");
    scanf("%d",&a);
    double b = pow(a,2);
    printf("%.2lf\n",b);

    return 0 ;
}