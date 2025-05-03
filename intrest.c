#include<stdio.h>
// WAP find simple interest => p*r*n / 100
int main()
{
	int p,r,n, intrest;
	
	printf("Enter Value of p: ");
	scanf("%d", &p);
	
	printf("Enter value of R: ");
	scanf("%d", &r);
	
	printf("Enter value of N: ");
	scanf("%d", &n);
	
	intrest = (p * r * n) / 100;
	
	printf("Intrest is: %d", intrest);
}