#include <stdio.h>
#include <math.h>

double cube(double num) {
	double result = num*num*num;
	return result;//"return" breaks out of the function and returns the value to the caller
	}

int main(int argc, char **argv)
{
	printf("Answer: %f\n", cube(3));
	return 0;
}

