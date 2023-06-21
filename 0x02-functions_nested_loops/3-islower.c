#include <stdio.h>

int _islower(int c);

int main(void)
{
	char ch = 'A';
	
	if (_islower(ch))
	{
		printf("%c is lowercase.\n", ch);
	}
	else
	{
		printf("%c is not lowercase.\n", ch);
	}
	return (0);
}

