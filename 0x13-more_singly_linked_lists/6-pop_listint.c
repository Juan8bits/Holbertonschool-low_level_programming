#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked list and
 * returns the head node´s data (n).
 * @head: Pointer to pointer with address to linked list head.
 * Return: 0 if linked list is empty, else, content of delete node.
 */
int pop_listint(listint_t **head)
{
	listint_t *copypointer;
	int nvalue;

	copypointer = NULL, nvalue = 0;

	if (*head)
	{
		copypointer = (*head)->next;
		nvalue = (*head)->n;
		free(*head);
		*head = copypointer;
	}
	return (nvalue);
}
