#include "main.h"

/**
 * _strcpy - copy the string pointed to by src
 * @dest: buffer to be pointed to by dest
 * @src: string to be copied
 *
 * Return: original_dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
