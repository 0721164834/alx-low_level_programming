#include "main.h"
/**
 * print_binary - prints binaryrepresentation of a number
 * @n: integer number
 *
 * Return: binary presenattion
 */

void print_binary(unsigned long int n)
{
    unsigned long int make = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int print_flag = 0;

    while (make > 0)
    {
        if  (n & make)
        {
            _putchar('1');
            print_flag = 1;
        }
        else if (print_flag)
        _putchar('0');
    make >>= 1;
    }
    if (!print_flag)
    _putchar('0');
}
