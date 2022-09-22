#include "main.h"

/**
 * _strncat - concatenate two strings adding in the input number of bytes
 * @src: string to copy
 * @dest: string to be copied to
 * @n: number of bytes to copy
 *
 * Return: the new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
