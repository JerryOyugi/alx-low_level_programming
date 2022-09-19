#include "main.h"

/**
 * puts_half - function prints second half of the string plus a new line
 * @str: string to be used
 * Return: 0 (success)
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = (i + 1) / 2; j < i; ++j)
	       _putchar(str[j]);
	_putchar('\n');
}
