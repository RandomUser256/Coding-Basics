#include <stdio.h>

int main(int argc, char **argv)
{
	FILE * fpointer /*Name of variable*/ = fopen("employees.txt", "w");
	/*Thats to create a file, fopen() is 
	a function that opens a file, in the parenthesis first goes the name of the
	* file, then the file mode. The three most common file modes are: r(read)
	* w(write) and a(append). You can specify a absolute path in the name */
	
	fprintf(fpointer, "Mike, Inventory\nPam, secretary\nJohn, boss");
	//Write info to a file

	fopen("employees.txt", "a"); //Append to the file
	fprintf(fpointer, "\nLawrence, janitor");
	
	/*w overwrites everything on a file*/
	
	fclose(fpointer);//Always close a file
	
	return 0;
}

