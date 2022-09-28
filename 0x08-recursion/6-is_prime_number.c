#include "main.h"

/**
 * is_prime_number - checks if a number is aa prime number
 *
 * @n: the number to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int n;

	if (n % 1 == 0 && n % n == 0)
		return (1);
	else
		return (0);
	return (is_prime_number(n + 1));
}
