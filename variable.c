#include<stdio.h>
#define PI 3.14

int main()
{
//	const flaot a = 15 ;

	float x, y , z;
	
//	printf("Enter X: ");
//	scanf("%f", &x);			// & - Address Operator
//	
//	printf("Enter Y: ");
//	scanf("%f", &y);

	printf("Enter x and y: ");
	scanf("%f%f", &x, &y);
	
	z = x + y;

	printf("Total of %.2f and %.2f is: %.2f",x,y, z);
}
