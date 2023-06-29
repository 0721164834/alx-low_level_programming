#include "main.h"

/**
 * print_number - this is a function that prints an integer
 * @n: the integer
 *
 * Return: nothing
 */
void print_number(int n)
{
	int divisor;
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	divisor = 1;

	while (n / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		digit = n / divisor;

		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
