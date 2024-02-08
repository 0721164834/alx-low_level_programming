#include "main.h"

/**
 * binary_to_unit - convert binary number to unsigned int
 * @b: pointing to the string of 0 and 1
 *
 * Return: converted number or 0 if more chars are in the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b ==  NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		decimal = decimal * 2 + (*b - '0');
		b++;
	}
	return (decimal);
}
