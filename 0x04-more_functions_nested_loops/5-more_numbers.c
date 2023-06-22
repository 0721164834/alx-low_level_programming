#include "main.h"

/**
 * more_numbers - 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	char numbers[] = "01234567891011121314\n";
	int length = sizeof(numbers) - 1;
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for (; j < length; j++)
		{
			_putchar(numbers[j]);
		}
	}
}

