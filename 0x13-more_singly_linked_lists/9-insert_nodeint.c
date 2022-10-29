#include "lists.h"

/**
 * insert_nodeint_at_index - insertin a new node at a given pos
 *
 * @head: double pointer
 * @idx: index of the node
 * @n: data of the new node to b inserted
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node;
	listint_t *current = *head;
	listint_t *previous = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	count = 0;
	do {
		if (count == idx)
		{
			new_node->a = n;
			if (previous)
				previous->next = new_node;
			else
				*head = new_node;
			new_node->next = current;
			return (new_node);
		}
		count++;
		previous = current;
		current = currrent->next;
	} while (previous && (count <= idx));
	return (NULL);
}
