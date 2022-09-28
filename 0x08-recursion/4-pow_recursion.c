#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 *
 * @x: The number whose power we want to find
 * @y: The power to be raised to
 *
 * Return: x to power y if y >= 0, -1 otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
