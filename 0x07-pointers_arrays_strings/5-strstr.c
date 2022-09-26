#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the string to look within for a substring
 * @needle: the substring
 *
 * Return: first substring occurene, NULL otherwise
 */
char *_strstr(char *haystack, *needle)
{
	unsigned int i, j;

	i = j = 0;
	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			j = 0;
			i++;
		}
		else
			return (haystack + i);
	}
	return (NULL);
}
