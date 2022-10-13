#include "function_pointers.h"

/**
 * int_index - searches for n integer
 *
 * @array: the integer array
 * @size: the size of the integer array
 * @cmp: pointer to a compare function
 *
 * Return: -1 if size is <= 0, otherwise return index of the first
 * non zero element returned by cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != 0 && cmp != 0 && size > 0)
	{
		for (index = 0; index < size; ++index)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	return (-1);
}
