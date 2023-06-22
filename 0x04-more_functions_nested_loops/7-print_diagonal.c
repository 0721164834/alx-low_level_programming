#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 *
 * @n:  number of times to print
 * Return: Always 0.
 */
void print_diagonal(int n)
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
			int j = 0;

			for (; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

