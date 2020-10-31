#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: address to first node.
 */
void free_list(list_t *head)
{
	list_t *mempoint = NULL;


	if (head)
	{
		while (head)
		{
			mempoint = head->next;
			free(head->next);
			free(head);
			head = mempoint;
		}
	}
}
