#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an usingned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, if there is
 *         an ivalid char in the string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for ( ; *b; b++)
	{
		if (*b == '0')
			decimal = (decimal << 1);
		else if (*b == '1')
			decimal = (decimal << 1) | 1;
		else
			return (0);
	}
	return (decimal);
}
