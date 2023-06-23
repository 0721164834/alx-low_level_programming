#include "main.h"
/**
* print_alphabet_x10 - check the code for Holberton School students.
*
* Return: Always 0.
*/
#include <stdio.h>

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for (; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}

