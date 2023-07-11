#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concetrates all the arguments in the program
 * @ac: int
 * @av: char
 *
 * Return: NULL if ac == 0 || av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t totalLength, currentPosition, argumentLength;
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*Calculate the total length of the concatenated string*/
	totalLength = 0;
	for (i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;/*Add 1 for the newline character*/
	}
	/*Allocate memory for the concatenated string*/
	concatenated = (char *)malloc((totalLength + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	/*Copy each argument and add a newline character*/
	currentPosition = 0;
	for (i = 0; i < ac; i++)
	{
		argumentLength = strlen(av[i]);
		strcpy(concatenated + currentPosition, av[i]);
		currentPosition += argumentLength;
		concatenated[currentPosition++] = '\n';
	}
	concatenated[totalLength] = '\0';/*Null-terminate the string*/
	return (concatenated);
}
