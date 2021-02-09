#include <stdio.h>
#include <string.h>

struct Student { 
	//It is a data structure where we can store different types of data in one
	char name[50];
	char major[50];
	int age;
	double gpa;
	};

int main(int argc, char **argv)
{
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy(student1.name, "Jim");//Un string es un array por lo que no se puede cambiar su valor, excepto con este comando
	strcpy(student1.major, "Business");
	
	printf("%f\n", student1.gpa);
	printf("%s\n", student1.name);
	
	return 0;
}

