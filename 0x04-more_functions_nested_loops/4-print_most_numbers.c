#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: The numbers since 0 upto 0
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	int length = sizeof(numbers) - 1;

	int i = 0;

	for (; i < length; i++)
	{
		_putchar(numbers[i]);
	}
}

