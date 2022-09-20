#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 * @c: character to be checked
 *
 * Return: 1 if character is alphabet, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
