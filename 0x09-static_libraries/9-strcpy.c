#include "main.h"

/**
 * _strcpy - Copies one string to another
 * @src: The string to be copied
 * @dest: The string to be copied to
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	char *string = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (string);
}
