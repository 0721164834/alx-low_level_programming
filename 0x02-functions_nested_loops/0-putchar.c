void print_alphabet();
#include "main.h"
void print_alphabet(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
	char *ptr = alphabet;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
}

