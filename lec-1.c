#include<stdio.h>
#define a 10
int main()
{
	//const int a = 150;		// variable initalize
	float b;		// variable declare
	printf("Enter b: ");
	scanf("%f", &b);
	
	printf("Value of b is: %f", b);	
}
/*
	Variable: store to data
	Data type: type of data
		int => number => %d
		float => decimal => %f
		char => character	 => %c
		string => multiple characters	=> %s
	Formate Specifire => %   
	
	Constant => const / macro #define
	scanf("%", &variable); & => address variable
*/