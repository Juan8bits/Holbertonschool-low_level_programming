#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head: Pointer with address to head node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	copy = head;
	while (head)
	{
		copy = head->next;
		free(head);
		head = copy;
	}
}
