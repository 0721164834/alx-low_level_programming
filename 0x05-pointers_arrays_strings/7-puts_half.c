#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: sring to be printed
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	int i;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	/*int i;*/

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

