#include "main.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void times_table(void)
{
	int multiplier = 0;

	while (multiplier <= 10)
	{
		_putchar("%d * 9 = %d\n", multiplier, multiplier * 9);
		multiplier++;
	}
}
