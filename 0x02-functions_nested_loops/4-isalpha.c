#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: To be checked
 *
 * Return: 1 if c is a letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

