#include "main.h"

/**
 * get_bit - Returns a value of a bit at a given index.
 * @n: The number from which to retrive the bit.
 * @index: The index of the bit to get, stsrting from 0.
 *
 * Return: The value of the bit at a given index or -1if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);/*Error: index out of range*/
	mask = 1UL << index;/**
			      * create a mask with only the bit at given index set to 1
			      */
	if ((n & mask) != 0)
		return (1);/*the bit at the given index is set (1)*/
	else
		return (0);/*the bit at a given index is not set (0)*/
}
