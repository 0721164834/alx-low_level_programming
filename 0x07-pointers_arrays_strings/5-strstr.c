#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring
 * @haystack: string haystack
 * @needle: substring
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int haystack_len = strlen(haystack);
	unsigned int needle_len = strlen(needle);
	unsigned int i;

	if (needle_len == 0)
	{
		return (haystack);
	}
	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		if (strncmp(&haystack[i], needle, needle_len) == 0)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
