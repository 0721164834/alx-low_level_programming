#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * strtow - split a string
 * @str: string
 *
 * Return: NULL if str == NULL || str == ""
 */
char **strtow(char *str)
{
	/*count the number of words*/
	int wc = 0;
	int i = 0;
	int len = strlen(str);
	char **words;
	int wi = 0;
	int start;
	int end;
	int wl;
	char *word;
	int j;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (i < len)
	{
		/*skip leading space*/
		while (i < len && str[i] == ' ')
		{
			i++;
		}
		/*count a word if it begins with a non-space character*/
		if (i < len && str[i] != ' ')
		{
			wc++;
			/*skip the rest of the word*/
			while (i < len && str[i] != ' ')
			{
				i++;
			}
		}
	}
	if (wc == 0)
	{
		return (NULL);
	}
	/*allocate memory for the array of words*/
	words = (char **)malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	/*split the string into words*/
	i = 0;
	while (i < len)
	{
		/*skip leading space*/
		while (i < len && str[i] == ' ')
		{
			i++;
		}
		/*allocate memory for a word*/
		start = i;
		while (i < len && str[i] != ' ')
		{
			i++;
		}
		end = i - 1;
		wl = end - start + 1;
		word = (char *)malloc((wl + 1) * sizeof(char));
		if (word == NULL)
		{
			/*free the previously allocated memory*/
			for (j = 0; j < wi; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		/*copy the word from the string to the allocated memory*/
		strncpy(word, &str[start], wl);
		word[wl] = '\0';
		words[wi] = word;
		wi++;
	}
	words[wi] = NULL;
	return (words);
}
