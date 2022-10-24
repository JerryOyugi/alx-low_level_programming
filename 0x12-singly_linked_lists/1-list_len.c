#include "lists.h"

/**
 * list_len - compute length of a linked list
 *
 * @h: pointer to the head node
 *
 * Return: Length of the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
