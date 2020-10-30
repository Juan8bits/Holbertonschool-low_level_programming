#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: pointer to list.
 * Return: [0] (nil) if str is NULL, else, the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t contnodes;

	contnodes = 0;

	while (h)
	{
		if ((*h).str)
			printf("[%d] %s\n", (*h).len, (*h).str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		contnodes++;
	}
	return (contnodes);
}
