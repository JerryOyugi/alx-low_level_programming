#include "main.h"

/**
 * string_toupper - changes lowercase letters in a string to uppercase
 * @str: string to be processed
 *
 * Return: The new string of letters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
