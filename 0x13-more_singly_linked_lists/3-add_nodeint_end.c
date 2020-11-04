#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a list.
 * @head: Pointer with address to head node of the list.
 * @n: Integer to add in the end node.
 * Return: address of new end node or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *addressend;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!*head)
		*head = newnode;
	else
	{
		addressend = *head;
		while (addressend->next)
			addressend = addressend->next;
		addressend->next = newnode;
	}
	return (newnode);
}
