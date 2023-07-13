#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _calloc - allocate a memory for an array
 * @nmemb: array
 * @size: memory size
 *
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
