#include "lists.h"

/**
 * add_dnodeint - Funtion that adds a new node at the beginning of
 * a dlistint_t list.
 * @head: Double pointer with address to head of a double linked list.
 * @n:Content of the new node.
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
