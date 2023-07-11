#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - allocate memory for concatenated strings
 * @s1: strin 1
 * @s2: strin 2
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t length1, length2;
	char *concatenated;

	/*Treat NULL strings as empty strings*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*Calculate the lengths of the input strings*/
	length1 = strlen(s1);
	length2 = strlen(s2);
	/*Allocate memory for the concatenated string*/
	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	/*Copy the contents of s1 and s2 into the concatenated memory*/
	strcpy(concatenated, s1);
	strcat(concatenated, s2);
	return (concatenated);
}
