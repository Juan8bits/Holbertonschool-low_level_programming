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
