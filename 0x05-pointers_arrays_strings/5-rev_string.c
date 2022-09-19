#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: 0 (success)
 */
void rev_string(char *s)
{
	int a, b, c, numbr;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;
	while (c < b)
	{
		numbr = s[c];
		s[c] = s[b];
		s[b] = numbr;
		c++;
		b--;
	}
}
