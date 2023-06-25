#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @num: chec number last digit
 *
 * Return: last_digit last number value digit
 */
int print_last_digit(int num)
{
	int a;

	if (num < 0)	
	num = -num;
	a = num % 10;
	if (a < 0)
		a =  -a;
	
	_putchar(a + '0');
	
	return (a);
}

