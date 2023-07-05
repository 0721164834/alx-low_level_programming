#include "main.h"

/**
 * is_prime_helper - calculate prime numbers
 * @n: number to be calculated
 * @divisor: divide to check for prime number
 *
 * Return: primenumber
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - check for a prime number
 * @n: integer
 *
 * Return: 1 if the input is a primenumber else 0
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
