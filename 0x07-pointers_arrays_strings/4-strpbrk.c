#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string to search
 * @accept: set of byes to sarch for
 *
 * Return: first occurence of one of the bytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		for (j = 0; *(accept + j) != '\0'; ++j)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (NULL);
}
