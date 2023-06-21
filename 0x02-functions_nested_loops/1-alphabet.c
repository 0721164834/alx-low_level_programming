#include <stdio.h>

void printAlphabet()
{
	char letter = 'a';

	while (letter <= 'z')
	{
		printf("%c ", letter);
		letter++;
	}
	printf("\n");
}

int main()
{
	printAlphabet();
	return 0;
}
