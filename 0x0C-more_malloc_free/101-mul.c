#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * valdate_input - check if the input is positive integers
 * @str: char
 *
 * Return: 1
 */
int valdate_input(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * multiply_numbers - multply two postive numbers
 * @num1: number 1
 * @num2: number 2
 *
 * Return: num1 * num2
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * print_number - print_number
 * @number: number
 *
 * Return: nothing
 */
void print_number(int number)
{
	char buffer[10];
	int i, j;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	/*buffer[10];*/
	i = 0;
	while (number > 0)
	{
		buffer[i++] = '0' + (number % 10);
		number /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
	_putchar ('\n');
}
/**
 * main - check code
 * @argc: argument code
 * @argv: argument vector
 *
 * Return:0
 */
int main(int argc, char *argv[])
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
	if (!valdate_input(argv[1]) || !valdate_input(argv[2]))
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
	result = multiply_numbers(num1, num2);
	print_number(result);
	return (0);
}
