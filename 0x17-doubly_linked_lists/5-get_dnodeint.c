#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of
 * a dlistint_t linked list.
 * @head: Pointer with address to head node.
 * @index: The index of the node, starting from 0.
 * Return: if the node does not exist, return NULL, else the nht node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *indexnode = NULL;

	indexnode = head;
	for (node = 0; indexnode; node++)
	{
		if (node == index)
			return (indexnode);
		indexnode = indexnode->next;
	}
	return (NULL);
}
