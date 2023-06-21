#include <stdio.h>
void times_table(void)
{
	int multiplier = 0;

	while (multiplier <= 10)
	{
		printf("%d * 9 = %d\n", multiplier, multiplier * 9);
		multiplier++;
	}
}
int main(void)
{
	times_table();
	return (0);		
}