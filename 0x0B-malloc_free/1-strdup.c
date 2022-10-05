#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocted space in memory
 * , which cotains a copy of th string given as a parameter
 *
 * @str: string to copy
 *
 * Return: NULL if str is NULL or insufficient memory
 * otherwise a pointer to the newly allocatd space in memory
 */
char *_strdup(char *str)
{
	char *newstr;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (*(str + len++))
		;
	newstr = malloc(len * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(newstr + i) = *(str + i);
		++i;
	}
	*(newstr + i) = '\0';
	return (newstr);
}
