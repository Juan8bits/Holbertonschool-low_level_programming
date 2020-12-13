#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node at a
 * given position.
 * @h: Double pointer with address to head of a double linked list.
 * @idx: The index of the list where the new node should be added. Starts at 0.
 * @n: Content of the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *copy;
	unsigned int position = 0;

	copy = *h;
	if (!*h)
		return (NULL);
	for (position = 0; copy; position++, copy = copy->next)
	{
		if (position == idx)
		{
			if (copy->prev == NULL) /* Head position */
				new = add_dnodeint(&(*h), n);
			else if (copy->next == NULL) /* Tail position */
				new = add_dnodeint_end(&(*h), n);
			else /* maybe medium position */
			{
				new = malloc(sizeof(dlistint_t));
				if (!new)
					return (NULL);
				new->n = n;
				(copy->prev)->next = new;
				new->prev = copy->prev;
				new->next = copy;
				copy->prev = new;
			}
			return (new);
		}
	}
	return (NULL);
}
