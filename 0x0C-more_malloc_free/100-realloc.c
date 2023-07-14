#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - rellocate a memory block
 * @ptr: pointer to the memory previously allocated with
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes for the new memory block
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}
