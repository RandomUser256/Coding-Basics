#include <stdio.h>

int main() {
	char operation[2];
	double num1;
	double num2;
	double result;
	
	printf("Welcome to calculator\n");
	printf("Choose first number\n");
	scanf("%lf", &num1);
	printf("Choose second number\n");
	scanf("%lf", &num2);
	printf("Choose operation: + - * / **\n");
	scanf(" %s", &operation);
	if (operation == '+') {
		result = num1 + num2;
		printf("The result of the adition is: %f", result);
		}
	else if (operation == '-') {
		result = num1 - num2;
		printf("The result of the subtraction is: %f", result);
		}
	else if (operation == '*') {
		result = num1 * num2;
		printf("The result of the multiplication is: %f", result);
		}
	else if (operation == '/') {
		result = num1 / num2;
		printf("The result of the division is: %f", result);
		}
	else if (operation == '**') {
		result = num1 / num2;
		printf("The result of the elevation is: %f", result);
		}
	else {
		printf("Operation not valid");
		}
	return 0;
	}
