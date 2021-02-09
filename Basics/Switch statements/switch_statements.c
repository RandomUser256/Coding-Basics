#include <stdio.h>

int main() {
	char grade;
	
	printf("Enter your grade\n");
	scanf("%c", &grade);
	
	switch(grade) {//It is good to compare one specific value to a bunch of others
		case 'A' :
			printf("You did great! ");
			break;
		case 'B' :
			printf("You did ok ");
			break;
		case 'C' :
			printf("You did poorly ");
			break;
		case 'D' :
			printf("You did very bad ");
			break;
		case 'F' :
			printf("You failes ");
			break;
		default :
			printf("Invalid input");
		}
	
	return 0;
	}
