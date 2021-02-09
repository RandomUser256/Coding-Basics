#include <stdio.h>

int main(int argc, char **argv)
{
	int age = 30;
	int * pAge = &age;
	
	printf("%d\n", *pAge);/*Dereferencing is grabing the info in the memory address
	so in this case its an int so I have to use "%d"*/
	
	printf("%p", &*pAge);//I can stack the dereferencing
	
	return 0;
}

