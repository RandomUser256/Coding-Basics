#include <stdio.h>

int main(int argc, char **argv)
{
	int secretNum = 5;
	int guess;
	int tries = 0;
	int guesslimit = 3;
	int OutofGuesses = 0;
	
	
	while(secretNum != guess && OutofGuesses == 0) {
		if (tries < guesslimit) {
			printf("Guess the secret number:\n");
			scanf("%d", &guess);
			tries ++;
			}
		else {
			OutofGuesses ++;
			}
}

if (OutofGuesses == 1) {
	printf("Your out of tries\n");
	}
else {
	printf("You win!\n");
	}
	return 0;
}

