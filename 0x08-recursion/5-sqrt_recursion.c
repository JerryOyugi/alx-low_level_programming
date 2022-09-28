#include "main.h"

/**
 * check -checks for the squareroot
 *
 * @i: Number to find squareroot of
 * @j: the number to check with if i*i is actually = j
 *
 * Return: An int
 */
int check(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	return (check(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number we are finding the squareroot of
 *
 * Return: the natural square root of that number, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
