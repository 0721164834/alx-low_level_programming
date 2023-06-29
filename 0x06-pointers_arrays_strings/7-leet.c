#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	/*Create a copy of the input string*/
	size_t len = strlen(str);
	char *encoded = (char *)malloc((len + 1) * sizeof(char));
	/*Define the mappings*/
	char *letters = "aAeEoOtTlL";
	char *replacements = "4433007711";
	/*Perform the encoding*/
	long unsigned int i;
	int j;

	strcpy(encoded, str);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (encoded[i] == letters[j])
			{
				encoded[i] = replacements[j];
				break;
			}
		}
	}
	return (encoded);
}
