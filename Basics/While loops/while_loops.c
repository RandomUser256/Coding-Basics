#include <stdio.h>

int main(int argc, char **argv)
{
	//It can loop over a certain code until a condition is false
	int index = 1;
	while(index <= 5) {//In parenthesis I specify the condition to be met
		printf("%d\n", index);
		index ++;// Same as "index = index + 1"; 
		}
	
	int index2 = 6;
	do {//This type of while executes the code first then it checks the condition
		printf("%d\n", index2);
		index2 ++;// Same as "index = index + 1";
		}
	while(index <= 5);
	
	return 0;
}

