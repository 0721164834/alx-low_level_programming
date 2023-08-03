#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_pointer = (char *)&num;

	/* If the least significant byte is 1, the system is little endian */
	if (*byte_pointer == 1)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
