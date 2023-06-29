#include "main.h"
#include <string.h>

/**
 * infinite_add - add two numbers
 * @n1: number to be added to n2
 * @n2: number to be added to n1
 * @r: buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: sum of n1 and n2
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int maxLen = (len1 > len2) ? len1 : len2;
	int carry = 0;
	int i;
	int digit1;
	int digit2;
	int sum;

	if (maxLen + 1 > size_r)
	{
		return (0);
	}

	r[maxLen + 1] = '\0';

	i = 0;
	for (; i < maxLen; i++)
	{
		digit1 = (i < len1) ? (n1[len1 - 1 - i] - '0') : 0;
		digit2 = (i < len2) ? (n2[len2 - 1 - i] - '0') : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[maxLen - i] = '0' + (sum % 10);
	}

	if (carry == 1)
	{
		if (maxLen + 1 == size_r)
		{
			return (0);
		}
		r[0] = '1';
		return (&r[0]);
	}

	return (&r[1]);
}
