#include <stdio.h>

/**
 * main - prints all possible different combinations of a two digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (a = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

