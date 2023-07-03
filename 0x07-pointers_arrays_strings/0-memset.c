#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of memory area pointed to by s
 *           with the constant byte b
 * @s: bytes of memory pointed to
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
