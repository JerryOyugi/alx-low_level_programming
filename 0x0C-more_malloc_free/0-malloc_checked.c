#include "main.h"

/**
 * malloc_checked - allocates memory
 *
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocate memory, or normal process
 * terminate with a status value  of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
