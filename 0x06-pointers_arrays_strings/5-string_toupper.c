#include "main.h"

/**
 * string_toupper - change all the lowercase letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: str uppercase
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
