#include "lists.h"

/**
 * free_listint2 - Function frees a list.
 * @head: pointer to pointer with address to list.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux = NULL;

	if (head)
	{
		while (*head)
		{
			aux = (*head)->next;
			free(*head);
			*head = aux;
		}
	}
}
