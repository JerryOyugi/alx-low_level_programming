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
	int i, j = 0;

	while (haystck[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			++j;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		j = 0;
		++i;
	}
	return (NULL);
}
