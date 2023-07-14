#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * print_number - print_number
 * @n: number
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
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * is_number - check for a postive number
 * @s: char
 *
 * Return: 1
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (!isdigit(s[i]))
			return (0);
	return (1);
}
/**
 * main - check code
 * @argc: argument code
 * @argv: argument vector
 *
 * Return:0
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	print_number(result);
	_putchar('\n');
	return (0);
}
