#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: prefix of string
 *
 * Return: length of the prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		length++;
		s++;
	}
	return (length);
}
