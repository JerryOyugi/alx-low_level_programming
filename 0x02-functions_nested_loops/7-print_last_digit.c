#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be used
 *
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
		j *= -1;
	_putchar(j + '0');
	return (j);
}