#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: memory
 *
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_l, s2_l;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_l = strlen(s1);
	s2_l = strlen(s2);
	if (n >= s2_l)
	{
		n = s2_l;
	}
	result = (char *)malloc(s1_l + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, s1_l);
	strncpy(result + s1_l, s2, n);
	result[s1_l + n] = '\0';
	return (result);
}
