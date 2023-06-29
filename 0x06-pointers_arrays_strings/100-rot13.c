#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - function to encode a string using rot13
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	/*Create a copy of the input string*/
	size_t len = strlen(str);
	char *encoded = (char *)malloc((len + 1) * sizeof(char));
	long unsigned int i;
	int j;
	int offset;

	strcpy(encoded, str);
	/*Perform the encoding*/
	for  (i = 0; i < len; i++)
	{
		for (j = 0; j < 2; j++)
		{
			offset = (j == 0) ? 13 : -13;
			if ((encoded[i] >= 'A' && encoded[i] <= 'Z') ||
				(encoded[i] >= 'a' && encoded[i] <= 'z'))
			{
			encoded[i] = (encoded[i] - 'A' + offset + 26) % 26 + 'A' + j * 32;
			break;
			}
		}
	}
	return (encoded);
}
