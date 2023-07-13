#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
 * malloc_checked - allocates a memory using malloc
 * @b: memory to be allocated
 *
 * Return: memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	return (ptr);
}
