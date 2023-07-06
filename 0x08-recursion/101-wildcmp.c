#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: string to compare with s2
 * @s2: sting to compare with s1
 *
 * Return: 1 if the strings can be considered identical otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 == *s2);
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
