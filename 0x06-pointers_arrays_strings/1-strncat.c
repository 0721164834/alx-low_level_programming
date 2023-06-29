#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string a
 * @src: string b
 * @n: number of bytes from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/*Move the pointer to the end of the dest*/
	while (*ptr != '\0')
	{
		ptr++;
	}

	/**
	 * Append src to dest , up to n bytes or untill the end
	 * of src is reached
	 */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/*Append a terminating null byte*/
	*ptr = '\0';

	return (dest);
}
