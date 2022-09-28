#include "main.h"

/**
 * factorial - computes factorial of a number
 *
 * @n: The number to compute
 * Return: factorial if n is >= 0, -1 otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
