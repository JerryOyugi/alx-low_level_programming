#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of characters,
 * initializing them with a specific character
 *
 * @size: size of array
 * @c: character to initialize the array
 *
 * Return: NULL if size is 0, otherwise the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
