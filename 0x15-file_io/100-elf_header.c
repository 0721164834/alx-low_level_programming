#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include "main.h"
/**
 * print_elf_header_info - Prints information from ELF header
 * @header: Pointer to the ELF header file structure
 *
 * prints various fileds from the Elf header.
 *
 * Return nothing
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	printf("Magic: %02x %02x %02x %02x\n",
			header->e_ident[0], header->e_ident[1],
			header->e_ident[2], header->e_ident[3]);
	printf("Class: %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", header->e_ident[5] == 1 ? " Little Endian" : "Big Edian")
		;
	printf("Version: %d\n", header->e_ident[6]);
	printf("OS/ABI: %d\n", header->e_ident[7]);
	printf("ABI Version: %d\n", header->e_ident[8]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: Ox%lx\n", header->e_entry);
}
/**
 * main - check the program
 * @argc: argument count
 * @argv: Array of argument strings
 *
 * Reads and displays the information contained in the ELF headerof an ELF file.
 * If the fike is not an ELF file or an error occurs, an appropriate error is 
 * displayed.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	if (header.e_ident[0] != 0x7F || header.e_ident[1] != 'E' ||
			 header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
