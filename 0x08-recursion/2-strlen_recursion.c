#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: String to be used
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 1;
	if (*s == '\0')
		return (0);
	return (l + _strlen_recursion(s + 1));
}
