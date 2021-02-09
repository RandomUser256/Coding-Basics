#include <stdio.h>

int main(int argc, char **argv)
{
	/*It is the adress where our computer stores it's data on the RAM*/
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';
		
	printf("sge: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);//%p to print out the memory adress, use "&" before the variable
	
	return 0;
}

