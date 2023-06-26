#include <stdio.h>
#include <math.h>

/**
 * largestPrimeFactor - prints the largest prime factor
 * @n: to be find
 *
 * Return: always 0.
 */
unsigned long int largestPrimeFactor(unsigned long int n)
{
	unsigned long int largestFactor = 0;

	while (n % 2 == 0)
	{
		largestFactor = 2;
		n /= 2;
	}

	unsigned long int sqrtN = sqrt(n);

	unsigned long int i = 3;

	for (; i <= sqrtN; i += 2)
	{
		while (n % i == 0)
		{
			largestFactor = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		largestFactor = n;
	}

	return (largestFactor);
}

/**
 * main - check code.
 * Return: Always 0
 */
int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int largestPrime = largestPrimeFactor(number);

	printf("%lu\n", largestPrime);

	return (0);
}

