#include <stdlib.h>
#include <stdio.h>

int main() {
	//Es una variable donde podemos guardar muchod tipos de valores
	int luckyNumbers[] = {4, 8, 9, 16, 54};
	int define_number[5];//Dentro de los corchetes va la cantidad de numeros que quiero guardar
	define_number[0] = 3;
	printf("%d\n", define_number[0]); 
	printf("%d\n", luckyNumbers[0]);
	luckyNumbers[0] = 7;
	printf("%d\n", luckyNumbers[0]);
	printf("%d", luckyNumbers[3]);
	
	return 0;
	}
