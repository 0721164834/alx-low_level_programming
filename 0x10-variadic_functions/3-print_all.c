#include"variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - this function prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *s, *separator;
	unsigned int i;
	va_list args;

	va_start(args, format);
	separator = "";
	i = 0;
	while (format && (format[i] != '\0'))
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
