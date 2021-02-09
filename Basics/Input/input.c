#include <stdlib.h>
#include <stdio.h>

int main() {
	
	char grade;
	printf("Enter your grade:\n");
	scanf("%c", &grade);
	printf("Your grade is %c\n", grade);
	
	char name[20];// Dentro de los corchetes va la cantidad de caracteres que quiero
	printf("Enter your name:\n");
	scanf("%s", name);//En in string no necesito el "%"
	printf("Your name is %s\n", name);
	
	char name2[20];// Dentro de los corchetes va la cantidad de caracteres que quiero
	printf("Enter your name:");
	fgets(name2, 20, stdin);//fgets es para obtener una linea completa de characteres, primero va la variable 
	//luego la cantidad de caracteres y finalmente de donde queremos obtener los datos
	printf("Your name is %s\n", name2);
	
	int age;
	printf("Enter your age\n");
	scanf("%d", &age);//Primero ingresar tipo de valor y luego la variable en la que se va guardar con un "&" antes
	printf("You are %d years old\n", age);
	
	double gpa;
	printf("Enter your gpa\n");
	scanf("%lf", &gpa);
	printf("Your gpa is %f", gpa);
	
	return 0;
	}
