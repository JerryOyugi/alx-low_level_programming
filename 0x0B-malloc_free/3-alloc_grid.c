#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 *
 * @height: height of array
 * @width: width of array
 *
 * Description: Each element should e initialized to zero
 *
 * Return: NULL when W & H are negative and on faiure;
 * otherwise, pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j, fail;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	fail = 0;
	for (i = 0; i < height; ++i)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			fail = 1;
			break;
		}

		for (j = 0; j < width; ++j)
			array[i][j] = 0;
	}
	if (fail)
	{
		for (j = 0; j <= i; ++j)
			free(array[j]);
		free(array);
	}
	return (array);
}
