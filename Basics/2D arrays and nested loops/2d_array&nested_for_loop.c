#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums[3][2] = {//We make arrays inside a 2D array
					{1, 2},
					{3, 4},
					{5, 6}
					};
	/*A 2D array needs 2 open and close brackets, it represents
	the  height and width of the array*/
	
	printf("%d\n", nums[1][1]);/*To call it you indicate two index, the first one 
	each array within it is counted as one index, the second is the index within
	the specified array*/
	
	/*I can also leave it without a value, just indicate the height and width
	 * then specify the indixes I want to assign a value to*/
	 
	 /*A nested loop ia a loop containing another loop*/
	 
	 int i, j;//Declare 2 variables at oncce
	 for(i = 0; i < 3; i++) {//"3" is height of 2D array"
		 for(j = 0; j < 2; j++) {//"2" is width of 2D array
			 printf("%d", nums[i][j]);
			 }
		 printf("\n");
		 }
	 
	 
	return 0;
}

