#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**
 * struct Elf64_Ehdr - ELF header structure
 * @e_ident: Magic number and other identification
 * @e_type: Object file type
 * @e_machine: Architecture type
 * @e_version: Object file version
 * @e_entry: Entry point virtual address
 * @e_phoff: Program header table offset
 * @e_shoff: Section header table offset
 * @e_flags: Proccessor-specific flags
 * @e_ehsize: ELF header size
 * @e_phentsize: size of program header entry
 * @e_phnum: Number of program header entries
 * @e_shentsize: size of section header entry
 * @e_shnum: Number of section header entries
 * @e_shstrndx: section name of the string table idex
 */
typedef struct Elf64_Ehdr
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;
#endif
