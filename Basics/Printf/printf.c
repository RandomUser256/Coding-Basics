#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Hello\nworld\n");
	printf("Hello\"world\n");// \" es para imprimir unas comillas
	int num = 50; 
	printf("This word %s is actually %d", "\"fifty\"", num ); //%d es para imprimir numeros, %s es para insertar un string
	printf("\n%f", 15.7);// %f es para imprimir numeros decimales
	
	return 0;
}
