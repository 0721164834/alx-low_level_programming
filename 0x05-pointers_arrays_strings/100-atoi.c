#include "main.h"
#include <limits.h>

/**
 * _atoi - convet sting to integer
 * @s: convert
 *
 * Return: result * sign
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;


	while (*s != '\0' && (*s < '\0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s != '\0' && *s >= '0' && *s <= '9')
	{
		digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}

