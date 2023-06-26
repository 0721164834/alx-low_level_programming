#include "main.h"

/**
 * puts2 - print every character of a string,
 *         starting with the first character
 * @str: string to be checked
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

