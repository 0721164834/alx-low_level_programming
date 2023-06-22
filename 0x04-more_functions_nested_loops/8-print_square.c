#include "main.h"

/**
 * print_square -  prints a square,
 * @size:  is the size of the square.
 *
 * Return: If size is 0 or less.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		for (; i < size; i++)
		{
			int j = 0;

			for (; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

