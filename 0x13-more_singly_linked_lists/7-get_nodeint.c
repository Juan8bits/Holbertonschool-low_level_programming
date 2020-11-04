#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list.
 * @head: Pointer to head of the list.
 * @index: Index of the node, starting at 0.
 * Return: content of the node pased by index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *indexnode = NULL;
	unsigned int position = 0;

	if (head)
	{
		indexnode = head;
		while (position < index && indexnode)
		{
			indexnode = indexnode->next;
			position++;
		}
	}
	return (indexnode);
}
