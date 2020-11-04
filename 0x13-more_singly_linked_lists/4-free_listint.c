#include "lists.h"

/**
 * free_listint - Function that frees a list.
 * @head: Pointer with address to first node to list.
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
