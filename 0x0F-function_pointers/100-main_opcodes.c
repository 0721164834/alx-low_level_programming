#include <stdlib.h>
#include <stdio.h>
/**
 * print_opcodes - this program prints opcodes of its own function
 * @x: passed arguments number
 * @m: number of argumrnts
 *
 * Return: nothing
 */
void print_opcodes(char *x, int m)
{
	int i;

	for (i = 0; i < m; i++)
	{
		printf("%.2hhx", x[i]);
		if (i < m - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - check code
 * @argc: argument code
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
