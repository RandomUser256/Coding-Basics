#include <stdio.h>

int max(int num1, int num2, int num3) {
	int result;
	if(num1 >= num2 && num1 >= num3){
			result = num1;
		}
	else if (num2 >= num1 && num2 >= num3){
			result = num2;
		}
	else {
			result = num3;
		}
		
	return result;
	}

int main(int argc, char **argv)
{
	if(3>2 || 2>5) {
		printf("True\n");
		}
	
	if(3 != 2) { //"!=" es diferente a lo indicado
		printf("True\n");
		}
	
	if( !(3 < 2)) { //"!" nega a todo la linea, lo hace falso automaticamente o en el caso de que sea falso lo vuelve cierto
		printf("True\n");
		}
		
	printf("Answer: %d", max(40,10,80));
	
	return 0;
}

