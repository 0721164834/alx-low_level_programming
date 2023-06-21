#include <unistd.h>
/*Declear a functio custom_putchar*/
void custom_putchar(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	char text[] = "__putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		custom_putchar(text[i]);
		i++;
	}
	return (0);
}
