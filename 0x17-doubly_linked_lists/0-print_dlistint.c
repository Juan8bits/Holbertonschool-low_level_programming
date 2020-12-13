#include "lists.h"

/**
 * print_dlistint - Funtion that prints double linked list content
 * @h: pointer to double linked list head.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
