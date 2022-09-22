#include "main.h"

/**
 * _strncpy - copies specific characters from one strint to another string
 * @src: the string to copy
 * @dest: the string to copy to
 * @n: number of bytes to copy to
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
