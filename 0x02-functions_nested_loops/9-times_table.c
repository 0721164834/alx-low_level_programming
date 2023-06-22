#include "main.h"
void times_table(void)
{
	int multiplier = 0;

	while (multiplier <= 10)
	{
		_putchar("%d * 9 = %d\n", multiplier, multiplier * 9);
		multiplier++;
	}
}
