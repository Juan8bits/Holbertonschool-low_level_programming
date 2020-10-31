#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: address to first node.
 */
void free_list(list_t *head)
{
	list_t *mempoint = NULL;

	while (head)
	{
		mempoint = head->next;
		free(head->str);
		free(head);
		head = mempoint;
	}
}
