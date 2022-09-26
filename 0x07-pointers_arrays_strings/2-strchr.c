#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: the character to search  for
 * @s: the string to search
 *
 * Return: a pointer to the  first occurence of the character, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
