#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - this function prints buffer
 * @b: string
 * @size: size of buffer
 * Return: buffer
 */
void print_buffer(char *b, int size)
{
	int i, j, ch;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		/*print the hexadecimal content*/
		for (j = 0; j < 10; j +=2)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j + 1] & 0xFF);
				if (i + j + 1 < size)
				{
					printf("%02x", b[i + j + 1] & 0xFF);
				}
				else
				{
					printf("  ");
				}
				printf(" ");
			}
			else
			{
				printf("    ");
			}
		}
		/*Print the content of the buffer*/
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				ch = b[i +j];
				if (isprint(ch))
				{
					printf("%c", ch);
				}
				else
				{
					printf(".");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}