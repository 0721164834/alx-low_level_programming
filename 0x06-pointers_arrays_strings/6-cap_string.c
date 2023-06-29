#include "main.h"
#include <ctype.h>

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: string in capital
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}

		/*check if the current characteris a word separator*/
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ','
				|| *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?'
				|| *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}

		ptr++;
	}
	return (str);
}
