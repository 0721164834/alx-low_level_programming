#include "main.h"

/**
 * is_palindrome_helper - check fo palindrome
 * @start: begin check
 * @end: end check
 *
 * Return: palindrome
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (is_palindrome_helper(start + 1, end - 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	char *end;

	if (*s == '\0')
	{
		return (1);
	}
	end = s;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	return (is_palindrome_helper(s, end));
}
