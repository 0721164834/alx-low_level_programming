#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - this function prints a string followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, const char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		/*Print the separator if it is not NULL and not the last string*/
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
