#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a poointer to a newly allocated memory
 * @str: pointer to be returned
 *
 * Return: returns NULL if insufisent memory was found
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t length;

	if (str == NULL)
	{
		return (NULL);
	}
	/*Calculate the length of the input string*/
	length = strlen(str);
	/*Allocate memory for the duplicated string*/
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	/*Copy the string into the duplicated memory*/
	strcpy(duplicate, str);
	return (duplicate);
}
