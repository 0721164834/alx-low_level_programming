#include "main.h"

/**
 * print_triangle -  prints a triangle.
 * @size:  is the size of the triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		for (; i <= size; i++)
		{
			int j = 0;

			for (; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

