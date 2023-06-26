#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: sring to be printed
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;
	int i;

	if (len % 2 == 1)
	{
		start += 1;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

