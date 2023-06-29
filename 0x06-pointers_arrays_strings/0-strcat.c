#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: sting a
 * @src: string b
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/*move the pointer to the end of dest*/
	while (*ptr != '\0')
	{
		ptr++;
	}

	/*Append src to dest*/
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/*Add a terminating null byte*/
	*ptr = '\0';

	return (0);
}
