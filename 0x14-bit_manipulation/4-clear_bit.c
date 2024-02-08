#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);/* Error: index out of range */
	set = 1UL << index; /**
			      *Create a mask with only the bit at the given index set to 1
			      */
	set = ~set;/**
		     *Invert the mask to have all bits set to 1 except the bit at the index
		     */
	*n &= set;/*
		     *Perform a bitwise AND operation to clear the bit at the given index
		     */
	return (1);/* Bit clearing successful */
}
