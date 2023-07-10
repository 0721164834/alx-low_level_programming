#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *                it with specific char
 * @size: isze of the array
 * @c: specific char
 *
 * Return: NULL if size = 0 and pointer ti array if NULL fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	/*Check if size is 0*/
	if (size == 0)
	{
		return (NULL);
	}

	/*Allocate memory for the array*/
	array = (char *)malloc(size * sizeof(char));

	/*Check if memory allocation failed*/
	if (array == NULL)
	{
		return (NULL);
	}

	/*Initialize the array with the specific char*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
