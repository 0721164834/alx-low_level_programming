#include "main.h"

/**
 * reverse_array - function to reverse th econtent of an array
 * @a: the contents of an array
 * @n: the number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
