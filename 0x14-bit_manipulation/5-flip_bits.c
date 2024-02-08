#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int need_result = n ^ m;
	unsigned int count = 0;

	/* Count the number of set bits in the need result */
	while (need_result)
	{
		count += need_result & 1;
		need_result >>= 1;
	}
	return (count);
}
