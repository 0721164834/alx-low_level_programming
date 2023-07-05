#include "main.h"

/**
 * _sqrt_helper - find the squreroot of a natural  nummber
 * @n: integer
 * @start: where calculation to start
 * @end: where calculation to end
 * Return: squreroot
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}
	mid = start + (end - start) / 2;
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - return the natural squreroot of a number
 * @n: int to find square root
 *
 * Return: Squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
