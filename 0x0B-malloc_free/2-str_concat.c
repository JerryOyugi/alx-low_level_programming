#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Description: treat null strings as empty
 *
 * Return: NULL on failure; otherwise a pointer on the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, L1, L2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	L1 = L2 = 0;
	while (s1[L1] != '\0')
		L1++;
	while (s2[L2] != '\0')
		L2++;

	str = malloc((L1 + L2 + 1) * sizeof(*s1));

	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < L1)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < L2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
