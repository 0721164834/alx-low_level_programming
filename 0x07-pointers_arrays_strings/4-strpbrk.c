#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - locates th efirst occurance in a string
 * @s: string
 * @accept: accepts the match of bytes
 *
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
