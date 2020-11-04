#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list.
 * @h: pointer with address to header linked list.
 * Return: Number of nodes (elements) in a linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodecounter;

	nodecounter = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodecounter++;
	}
	return (nodecounter);
}
