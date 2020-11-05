#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list.
 * @h: pointer with address to linked list.
 * Return: Number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodecounter;

	for (nodecounter = 0; h; nodecounter++)
		h = h->next;
	return (nodecounter);
}

/**
 * delete_nodeint_at_index - Function that delete the node at index of a list.
 * @head: Pointer with address to pointer to head.
 * @index: Node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	unsigned int len, counter;

	if (!head || !*head)
		return (-1);
	len = listint_len(*head);
	if (index <= len)
	{
		if (index == 0)
		{
			aux = (*head)->next;
			free(*head);
			*head = aux;
			return (1);
		}
		aux = *head;
		for (counter = 0; counter <= index; counter++)
		{
			if (counter == index - 1)
			{
				free(aux->next);
				aux->next = (aux->next)->next;
				return (1);
			}
			aux = aux->next;
		}
	}
	return (-1);
}
