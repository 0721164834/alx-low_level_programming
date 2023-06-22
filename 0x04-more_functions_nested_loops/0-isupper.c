#include <stdio.h>
/**
 * _isupper - check if a character is uppercase.
 *
 * Return: Always 0.
 */
int _isupper(int c);
int main(void)
{
	char ch = 'a';

	if (_isupper(ch))
	{
		printf("%c is uppercase.\n", ch);
	}
	else
	{
		printf("%c is not uppercase.\n", ch);
	}
	return (0);
}

