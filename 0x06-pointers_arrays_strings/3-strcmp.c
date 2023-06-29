#include "main.h"

/**
 * _strcmp - function thst compares two strings
 * @s1: string to be compared to s2
 * @s2: string to be compared to s1
 *
 * Return: comparision
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-15);
		}
		else if (*s1 > *s2)
		{
			return (15);
		}
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
