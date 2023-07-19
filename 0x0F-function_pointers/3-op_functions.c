#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: add to b
 * @b: add to a
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - find difference
 * @a: subtract with b
 * @b: subtract from a
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - find product
 * @a: multiply with b
 * @b: multiply with a
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculate division
 * @a: number a
 * @b: number to divide a
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds remainder
 * @a: number a
 * @b: divide a
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
