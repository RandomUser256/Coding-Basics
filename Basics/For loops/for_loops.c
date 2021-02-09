#include <stdio.h>

int main(int argc, char **argv)
{
	
	int i = 1;
	while(i <= 5) {
		printf("%d\n", i);
		i++;
		}
		
	//or
	
	int o;
	for(o = 1; o <= 5; o++) {/*In the parenthesis first goes the variable value, then the
		looping conditions and then another action*/
		printf("%d\n", o);
		}
		
	int luckyNum[] = {1,23,36,49,57,60};
	for(i = 0; i < 6; i++) {
		printf("%d\n", luckyNum[i]);
		}
	
	return 0;
}

