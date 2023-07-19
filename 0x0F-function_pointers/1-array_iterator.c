#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as
 * a parameter on each elementof an array
 * @size: size of the array
 * @array: parameter of element
 * @action: size
 * Return: -1 if no element matches
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/*for (i = 0; i < size; i++)*/
	if (array && action)
	{
		i = 0;
		while (i < size)
		{

			action(array[i]);
			i++;
		}
	}
}
