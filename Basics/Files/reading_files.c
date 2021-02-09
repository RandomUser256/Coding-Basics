#include <stdio.h>

int main(int argc, char **argv)
{
	char line[255];
	FILE * fpointer /*Name of variable*/ = fopen("employees.txt", "r");
	
	fgets(line, 255, fpointer);/*To obtain information from something, fisrt goes the place
	where it will store the obtained data, then the maximum size it can read
	and finally the variable containing the file* in*/
	fgets(line, 255, fpointer);//It moves down a line
	printf("%s", line);
	
	return 0;
}

