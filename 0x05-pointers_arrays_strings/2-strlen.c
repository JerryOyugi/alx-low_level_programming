#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to be processed
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
		;
	return (a);
}
