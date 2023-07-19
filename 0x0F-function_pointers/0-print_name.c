#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - this function prints a name
 * @name: name
 * @f: f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
