#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: minmum
 * @max: maxmum
 *
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}
	arr = (int *)malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
