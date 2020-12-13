#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of
 * a dlistint_t list.
 * @head: Double pointer with address to head of a double linked list.
 * @n:Content of the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end;
	dlistint_t *headcpy;

	headcpy = *head;
	new_end = malloc(sizeof(dlistint_t));
	if (!new_end)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	new_end->prev = NULL;
	if (!*head)
		*head = new_end;
	else
	{
		while (headcpy->next)
			headcpy = headcpy->next;
		new_end->prev = headcpy;
		headcpy->next = new_end;
	}
	return (new_end);
}
