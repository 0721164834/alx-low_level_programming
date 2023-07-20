#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - this function prints numbers
 * @separator: this is the string to be printed
 * @n: where the string to printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		/* Print the separator if it is not NULL and not the last number*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
		va_end(args);
		printf("\n");
}
