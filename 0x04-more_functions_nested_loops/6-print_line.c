#include "main.h"

/**
 * print_line -  prints 10 times the numbers, from 0 to 14
 *@n: to be checked
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		for (; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

