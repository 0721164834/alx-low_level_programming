#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - takes integer as input and prints the opcodes of the main function in hexadecimal
 * @num_bytes: input integer
 *
 * Return: nothing
 */
void print_opcodes(int num_bytes)
{
	unsigned char* main_ptr = (unsigned char*)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(main_ptr + i));
	}
	printf("\n");
}

/**
 * main - check the code
 * @argc: argument code
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);
	return (0);
}
