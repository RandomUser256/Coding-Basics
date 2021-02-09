#include <stdio.h>

int main(int argc, char **argv)
{
		/*It is a type of data, it is a memory address*/
		int age = 30;
		int * pAge = &age;/*It can store the memory address of an existing variable
		use an '*', then the name and finally the varible with an \'&' before it*/
		double gpa = 3.4;
		double * pGpa = &gpa;
		char grade = 'A';
		char * pGrade = &grade;
		
				
		printf("age's memory address: %p\n", pGrade);/*To reference it use "%p"*/
	return 0;
}

