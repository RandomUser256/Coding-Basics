#include <stdio.h>

int main(int argc, char **argv)
{
	//Primero va el tipo de valor,luego el nombre y finalmente el valor de la variable
	char chname[] = "Max";
	int ch_age = 22;
	
	printf("Hello I am %s\n", chname); //El "%s" es para indicarle que voy a guardar otro string o variable
	printf("I am %d years old \n", ch_age); //El ""%d" es para indicarle que voy a inngresar un valor de int
	
	ch_age = 30;
	printf("I am now %d years old \n", ch_age);
	 
	return 0;
}

