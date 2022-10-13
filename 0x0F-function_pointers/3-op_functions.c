#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 *
 * @a: 1st intger
 * @b: 2nd integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Division operation
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: remainder of the quotient between a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
