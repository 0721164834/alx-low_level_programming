#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @num: chec number last digit
 *
 * Return: last_digit last number value digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar("%d");
	_putchar('\n');
	_putchar(last_digit);
	return (last_digit);
}
