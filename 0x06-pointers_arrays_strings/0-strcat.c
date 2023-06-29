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
	char *temp = dest;

	/*Find rhe end of dest string*/
	while (*temp != '\0')
	{
		temp++;
	}
	/*Copy the src string to the end of dest*/
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	/*Add a terminating null byte*/
	*temp = '\0';
	return (dest);
}
