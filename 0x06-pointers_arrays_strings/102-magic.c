#include <stdio.h>

/**
 * print_number - function to print number
 *@n: the integer
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor;
	int digit;

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
	printf("\\a[2] = %d\n", 98);
}
