#include <stdio.h>

void printAlphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		printf("%c ", letter);
		letter++;
	}
	printf("\n");
}
