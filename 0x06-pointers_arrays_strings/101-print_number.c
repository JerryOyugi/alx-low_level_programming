#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to be printed
 *
 * Return: 0 (success)
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	a = n;

	if (a / 10)
		print_number(a / 10);
	_putchar(a % 10 + '0');
}
