#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: string
 * @to: where to point to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	free(*s);

	*s = malloc((strlen(to) + 1) * sizeof(char));

	strcpy(*s, to);
}
