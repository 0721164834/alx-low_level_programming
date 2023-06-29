#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: where the string to be copied to
 * @src: string to be copied
 * @n: number of characters of the string
 *
 * Return: string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*Copy the characters from src to dest, upto n characters*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/**
	 * Pad dest with null bytes if n is greater than
	 * the lenght of src
	 */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
