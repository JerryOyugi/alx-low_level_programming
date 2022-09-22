#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: string to be copied
 * @dest: string to be copied to
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
