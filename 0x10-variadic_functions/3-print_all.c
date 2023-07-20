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
	va_list args;
	char c, *s;
	int i, index = 0;
	float f;

	va_start(args, format);
	while (format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c, ", c);
		}
		else if (format[index] == 'i')
		{
			i = va_arg(args, int);
			printf("%d, ", i);
		}
		else if (format[index] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f, ", f);
		}
		else if (format[index] == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
