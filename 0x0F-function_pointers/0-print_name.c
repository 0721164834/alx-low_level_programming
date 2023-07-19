#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - this function prints a name
 * @name: name
 * @f: f
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
	/*Call the function pointer with the name as an argument*/
	if (name != NULL && f != NULL)
	f(name);
}
