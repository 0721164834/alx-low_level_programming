#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);/*error index out of range*/
	set = 1UL << index;/*Create a set with only the bit at the given index to 1*/
	*n |= set;/**
		    *perform a bitwise OR operation to set the bit at a given index to 1
		    */
	return (1); /*bit setting successful*/
}
