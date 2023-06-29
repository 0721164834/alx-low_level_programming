#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * rot13 - function to encode a string using rot13
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char *result = malloc(strlen(str) + 1);
	int i, j;
	char ch;

	if (result == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(1);
	}
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		ch = str[i];
		if (ch >= 'a' && ch <= 'z')
		{
			ch = (ch - 'a' + 13) % 26 + 'a';
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = (ch - 'A' && ch <= 'Z');
		}
		result[j++] = ch;
	}
	result[i] = '\0';
	return (result);
}
