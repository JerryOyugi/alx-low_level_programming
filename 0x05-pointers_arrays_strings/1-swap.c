#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer for the first integer
 * @b: pointer for the second integer
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int number;

	number = *a;
	*a = *b;
	*b = number;
}
