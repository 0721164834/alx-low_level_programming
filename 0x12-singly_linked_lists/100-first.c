#include <stdio.h>
#include "lists.h"
void print_before_main(void)__attribute__((constructor));
/**
 * print_before_main - function thatprints the text before main.
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
