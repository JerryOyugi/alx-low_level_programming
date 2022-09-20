#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to be checked and printed
 *
 * Return: 1 and write + if no. is > 0 else 0 and write -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
