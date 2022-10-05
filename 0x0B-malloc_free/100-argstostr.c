#include "main.h"

/**
 * argstostr - concatenates all the arguments of my program
 *
 * @ac: argumnt count
 * @av: arguments as string array
 *
 * Return: NULL if ac == 0 or av == NULL and on failuer
 * pointer to a new string otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, L;
	char *str;

	k = L = 0;
	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
			L++;
		L++;
	}

	L++;
	str = malloc(L * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
