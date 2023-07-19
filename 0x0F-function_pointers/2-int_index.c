#include "function_pointers.h"
/*#include <stddef.h>*/
#include <stdio.h>
/**
 * int_index - searches for an inteeger
 * @array: being searched
 * @size: number of elements in the arrary
 * @cmp: ponter to the function used to compare values
 *
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size >0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
