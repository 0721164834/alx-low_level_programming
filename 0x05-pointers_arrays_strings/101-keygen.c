#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * generateRandomchar - generate a char
 *
 * Return: random character
 */
char generateRandomchar(void)
{
	int random = rand() % 62;

	if (random < 26)
		return ('A' + random);
	else if (random < 52)
		return ('a' + (random - 26));
	else
		return ('0' + (random - 52));
}
/**
 * generatePassword - generate the password
 * @password: password to be generated
 */
void generatePassword(char *password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generateRandomchar();
	}
	password[PASSWORD_LENGTH] = '\0';
}
/**
 * main - check the code
 *
 *Return: Always
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	generatePassword(password);

	printf("%s\n", password);
	return (0);
}
