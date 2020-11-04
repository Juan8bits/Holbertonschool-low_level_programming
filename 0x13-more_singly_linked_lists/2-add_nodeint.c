#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a list.
 * @head:pointer with address to head linked list.
 * @n: Integer to add at in new node to list.
 * Return: address to new node on head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
