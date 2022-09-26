#include "main.h"

/**
 * print_diagsums - prints sum of two diagnonals of a square matrix of integers
 *
 * @a: pointer to a multidimensional area
 * @size: dimensions of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int ls, rs, i, j, k;

	j = 0;
	k = size - 1;
	ls = rs = 0;
	for (i = 0; i < size; ++i, j += size + 1, k += size - 1)
	{
		ls += *(a + j);
		rs += *(a + k);
	}
	printf("%d, %d\n", ls, rs);
}
