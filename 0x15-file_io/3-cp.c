#include "main.h"

/**
 * print_error - c
 * @error_message: n
 * @exit_code: j
 *
 * Return: 1
 */
void print_error(const char *error_message. int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exitcode);
}

/**
 * main - check code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc,char *argv[])
{
	const char *file_from, *file_to;
	if (argc != 3)
		print_error("Usage: cp file_from file_to", 97);
	
