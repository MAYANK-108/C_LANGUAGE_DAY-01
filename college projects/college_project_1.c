#include <stdio.h>
int main(){
	float Area,Perimeter;
	float a;
	printf("Enter radius:");
	scanf("%f",&a);
	Area = 3.14*a*a;
	Perimeter = 2*3.14*a;
	printf("Area = %.2f\n",Area);
	printf("Perimeter = %.2f\n",Perimeter);
	return 0;
}
