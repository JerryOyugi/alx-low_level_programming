#include "lists.h"

/**
 * free_listint2 - function that frees a listit_t list
 *
 * @head: a double pointe of lists
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
