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
	size_t cp_size;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	cp_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, cp_size);
	free(ptr);
	return (new_ptr);
}
