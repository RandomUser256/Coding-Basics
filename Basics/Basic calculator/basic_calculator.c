#include <stdio.h>

int main(int argc, char **argv)
{	
	double num1;
	double num2;
	printf("Enter first number:\n");
	scanf("%lf", &num1);
	printf("Enter second number:\n");
	scanf("%lf", &num2);
	
	printf("Answer: %f", num1 + num2);
	
	return 0;
}

