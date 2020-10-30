#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linketd list.
 * @h: pointer to head node.
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t times;

	times = 0;
	while (h)
	{
		times++;
		h = h->next;
	}
	return (times);
}
