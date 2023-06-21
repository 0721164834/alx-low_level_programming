void print_alphabet_x10(void);
void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
		char currentLetter = letter;

		while (currentLetter <= 'z')
		{
			_putchar(currentLetter);
			currentLetter++;
		}
		letter = 'a';
		count++;

		if (count < 10)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
