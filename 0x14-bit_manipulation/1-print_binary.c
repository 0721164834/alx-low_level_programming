#include "main.h"

/**
 * print_binary - Prints th ebinary representation of a nuber
 * @n: the number to print in binary format.
 *
 * Return: printed binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int print_flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			print_flag = 1;
		}
		else if (print_flag)
			_putchar('0');
		mask >>= 1;
	}
	if (!print_flag)
		_putchar('0');
}
